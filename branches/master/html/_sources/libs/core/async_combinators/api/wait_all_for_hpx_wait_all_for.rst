
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_wait_all_for_hpx_wait_all_for_api:

-----------------
hpx::wait_all_for
-----------------

Defined in header :hpx-header:`libs/full/include/include,hpx/future.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::wait_all_for_nothrow <modules_wait_all_for_hpx_wait_all_for_nothrow_api>`
   - :ref:`hpx::wait_all_for_n <modules_wait_all_for_hpx_wait_all_for_n_api>`
   - :ref:`hpx::wait_all_for_n_nothrow <modules_wait_all_for_hpx_wait_all_for_n_nothrow_api>`

.. doxygenfunction:: hpx::wait_all_for(hpx::chrono::steady_duration const &timeout, InputIter first, InputIter last)
   :project: hpx
.. doxygenfunction:: hpx::wait_all_for(hpx::chrono::steady_duration const &timeout, std::vector< future< R >> const &futures)
   :project: hpx
.. doxygenfunction:: hpx::wait_all_for(hpx::chrono::steady_duration const &timeout, std::array< future< R >, N > const &futures)
   :project: hpx
.. doxygenfunction:: hpx::wait_all_for(hpx::chrono::steady_duration const &timeout, hpx::future< T > const &f)
   :project: hpx
.. doxygenfunction:: hpx::wait_all_for(hpx::chrono::steady_duration const &timeout, T const &... futures)
   :project: hpx
