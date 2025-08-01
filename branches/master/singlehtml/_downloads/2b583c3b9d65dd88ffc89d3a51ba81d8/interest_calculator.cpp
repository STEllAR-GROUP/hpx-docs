/////////////////////////// Interest Calculator ///////////////////////////////
//  Copyright (c) 2012 Adrian Serio
//
//  SPDX-License-Identifier: BSL-1.0
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Purpose: Calculates compound interest while using dataflow objects.
//
// In this example, you supply the program with the principal [$], the interest
// rate [%], the length of the compound period [months], and the length of time
// the money is invested [months]. The program will calculate the new total
// amount of money you have and the amount of interest made. For example if
// you have $100, an interest rate of 5%, a compound period of 6 months and
// you leave your money in that account for 36 months you will end up with
// $134.01 and will have made $34.01 in interest.
///////////////////////////////////////////////////////////////////////////////

#include <hpx/hpx.hpp>
#include <hpx/hpx_init.hpp>

#include <hpx/async_local/dataflow.hpp>
#include <hpx/modules/actions_base.hpp>

#include <iostream>

using hpx::program_options::options_description;
using hpx::program_options::value;
using hpx::program_options::variables_map;

///////////////////////////////////////////////////////////////////////////////
//[interest_calc_add_action
// Calculate interest for one period
double calc(double principal, double rate)
{
    return principal * rate;
}

///////////////////////////////////////////////////////////////////////////////
// Add the amount made to the principal
double add(double principal, double interest)
{
    return principal + interest;
}
//]

///////////////////////////////////////////////////////////////////////////////
//[interest_hpx_main
int hpx_main(variables_map& vm)
{
    {
        using hpx::dataflow;
        using hpx::make_ready_future;
        using hpx::shared_future;
        using hpx::unwrapping;
        hpx::id_type here = hpx::find_here();

        double init_principal =
            vm["principal"].as<double>();              //Initial principal
        double init_rate = vm["rate"].as<double>();    //Interest rate
        int cp = vm["cp"].as<int>();     //Length of a compound period
        int t = vm["time"].as<int>();    //Length of time money is invested

        init_rate /= 100;    //Rate is a % and must be converted
        t /= cp;    //Determine how many times to iterate interest calculation:
        //How many full compound periods can fit in the time invested

        // In non-dataflow terms the implemented algorithm would look like:
        //
        // int t = 5;    // number of time periods to use
        // double principal = init_principal;
        // double rate = init_rate;
        //
        // for (int i = 0; i < t; ++i)
        // {
        //     double interest = calc(principal, rate);
        //     principal = add(principal, interest);
        // }
        //
        // Please note the similarity with the code below!

        shared_future<double> principal = make_ready_future(init_principal);
        shared_future<double> rate = make_ready_future(init_rate);

        for (int i = 0; i < t; ++i)
        {
            shared_future<double> interest =
                dataflow(unwrapping(calc), principal, rate);
            principal = dataflow(unwrapping(add), principal, interest);
        }

        // wait for the dataflow execution graph to be finished calculating our
        // overall interest
        double result = principal.get();

        std::cout << "Final amount: " << result << std::endl;
        std::cout << "Amount made: " << result - init_principal << std::endl;
    }

    return hpx::finalize();
}
//]

///////////////////////////////////////////////////////////////////////////////
//[interest_main
int main(int argc, char** argv)
{
    options_description cmdline("Usage: " HPX_APPLICATION_STRING " [options]");

    cmdline.add_options()("principal", value<double>()->default_value(1000),
        "The principal [$]")("rate", value<double>()->default_value(7),
        "The interest rate [%]")("cp", value<int>()->default_value(12),
        "The compound period [months]")("time",
        value<int>()->default_value(12 * 30),
        "The time money is invested [months]");

    hpx::init_params init_args;
    init_args.desc_cmdline = cmdline;

    return hpx::init(argc, argv, init_args);
}
//]
