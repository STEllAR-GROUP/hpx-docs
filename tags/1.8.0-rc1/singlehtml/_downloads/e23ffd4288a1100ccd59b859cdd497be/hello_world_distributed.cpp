///////////////////////////////////////////////////////////////////////////////
//  Copyright (c) 2007-2014 Hartmut Kaiser
//  Copyright (c) 2011 Bryce Adelstein-Lelbach
//
//  SPDX-License-Identifier: BSL-1.0
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
///////////////////////////////////////////////////////////////////////////////

// Including 'hpx/hpx_main.hpp' instead of the usual 'hpx/hpx_init.hpp' enables
// to use the plain C-main below as the direct main HPX entry point.
#include <hpx/config.hpp>
#if !defined(HPX_COMPUTE_DEVICE_CODE)
#include <hpx/hpx_main.hpp>
#include <hpx/include/actions.hpp>
#include <hpx/include/components.hpp>
#include <hpx/include/lcos.hpp>
#include <hpx/include/parallel_executors.hpp>
#include <hpx/include/runtime.hpp>
#include <hpx/include/util.hpp>
#include <hpx/iostream.hpp>

#include <cstddef>
#include <cstdint>
#include <list>
#include <mutex>
#include <set>
#include <vector>

///////////////////////////////////////////////////////////////////////////////
// The purpose of this example is to execute a HPX-thread printing "Hello world"
// once on each OS-thread on each of the connected localities.
//
// The function hello_world_foreman_action is executed once on each locality.
// It schedules a HPX-thread (encapsulating hello_world_worker) once for each
// OS-thread on that locality. The code make sure that the HPX-thread gets
// really executed by the requested OS-thread. While the HPX-thread is scheduled
// to run on a particular OS-thread, we may have to retry as the HPX-thread may
// end up being 'stolen' by another OS-thread.

///////////////////////////////////////////////////////////////////////////////
//[hello_world_worker
std::size_t hello_world_worker(std::size_t desired)
{
    // Returns the OS-thread number of the worker that is running this
    // HPX-thread.
    std::size_t current = hpx::get_worker_thread_num();
    if (current == desired)
    {
        // The HPX-thread has been run on the desired OS-thread.
        char const* msg = "hello world from OS-thread {1} on locality {2}\n";

        hpx::util::format_to(hpx::cout, msg, desired, hpx::get_locality_id())
            << std::flush;

        return desired;
    }

    // This HPX-thread has been run by the wrong OS-thread, make the foreman
    // try again by rescheduling it.
    return std::size_t(-1);
}
//]

///////////////////////////////////////////////////////////////////////////////
//[hello_world_foreman
void hello_world_foreman()
{
    // Get the number of worker OS-threads in use by this locality.
    std::size_t const os_threads = hpx::get_os_thread_count();

    // Populate a set with the OS-thread numbers of all OS-threads on this
    // locality. When the hello world message has been printed on a particular
    // OS-thread, we will remove it from the set.
    std::set<std::size_t> attendance;
    for (std::size_t os_thread = 0; os_thread < os_threads; ++os_thread)
        attendance.insert(os_thread);

    // As long as there are still elements in the set, we must keep scheduling
    // HPX-threads. Because HPX features work-stealing task schedulers, we have
    // no way of enforcing which worker OS-thread will actually execute
    // each HPX-thread.
    while (!attendance.empty())
    {
        // Each iteration, we create a task for each element in the set of
        // OS-threads that have not said "Hello world". Each of these tasks
        // is encapsulated in a future.
        std::vector<hpx::future<std::size_t>> futures;
        futures.reserve(attendance.size());

        for (std::size_t worker : attendance)
        {
            // Asynchronously start a new task. The task is encapsulated in a
            // future, which we can query to determine if the task has
            // completed. We give the task a hint to run on a particular worker
            // thread, but no guarantees are given by the scheduler that the
            // task will actually run on that worker thread.
            hpx::execution::parallel_executor exec(
                hpx::threads::thread_schedule_hint(
                    hpx::threads::thread_schedule_hint_mode::thread,
                    static_cast<std::int16_t>(worker)));
            futures.push_back(hpx::async(exec, hello_world_worker, worker));
        }

        // Wait for all of the futures to finish. The callback version of the
        // hpx::wait_each function takes two arguments: a vector of futures,
        // and a binary callback.  The callback takes two arguments; the first
        // is the index of the future in the vector, and the second is the
        // return value of the future. hpx::wait_each doesn't return until
        // all the futures in the vector have returned.
        hpx::lcos::local::spinlock mtx;
        hpx::wait_each(hpx::unwrapping([&](std::size_t t) {
            if (std::size_t(-1) != t)
            {
                std::lock_guard<hpx::lcos::local::spinlock> lk(mtx);
                attendance.erase(t);
            }
        }),
            futures);
    }
}
//]

//[hello_world_action_wrapper
// Define the boilerplate code necessary for the function 'hello_world_foreman'
// to be invoked as an HPX action.
HPX_PLAIN_ACTION(hello_world_foreman, hello_world_foreman_action)
//]

///////////////////////////////////////////////////////////////////////////////
//[hello_world_hpx_main
// Here is the main entry point. By using the include 'hpx/hpx_main.hpp' HPX
// will invoke the plain old C-main() as its first HPX thread.
int main()
{
    // Get a list of all available localities.
    std::vector<hpx::id_type> localities = hpx::find_all_localities();

    // Reserve storage space for futures, one for each locality.
    std::vector<hpx::future<void>> futures;
    futures.reserve(localities.size());

    for (hpx::id_type const& node : localities)
    {
        // Asynchronously start a new task. The task is encapsulated in a
        // future, which we can query to determine if the task has
        // completed.
        typedef hello_world_foreman_action action_type;
        futures.push_back(hpx::async<action_type>(node));
    }

    // The non-callback version of hpx::wait_all takes a single parameter,
    // a vector of futures to wait on. hpx::wait_all only returns when
    // all of the futures have finished.
    hpx::wait_all(futures);
    return 0;
}
//]
#endif
