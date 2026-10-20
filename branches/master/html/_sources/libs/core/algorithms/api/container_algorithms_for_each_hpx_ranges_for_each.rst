
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_for_each_hpx_ranges_for_each_api:

---------------------
hpx::ranges::for_each
---------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::for_each_n <modules_container_algorithms_for_each_hpx_ranges_for_each_n_api>`

.. doxygenfunction:: hpx::ranges::for_each(InIter first, Sent last, F &&f, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::for_each(Rng &&rng, F &&f, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::for_each(ExPolicy &&policy, FwdIter first, Sent last, F &&f, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::for_each(ExPolicy &&policy, Rng &&rng, F &&f, Proj &&proj=Proj())
   :project: hpx
