
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_merge_hpx_ranges_inplace_merge_api:

--------------------------
hpx::ranges::inplace_merge
--------------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::merge <modules_container_algorithms_merge_hpx_ranges_merge_api>`

.. doxygenfunction:: hpx::ranges::inplace_merge(ExPolicy &&policy, Rng &&rng, Iter middle, Comp &&comp=Comp(), Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::inplace_merge(ExPolicy &&policy, Iter first, Iter middle, Sent last, Comp &&comp=Comp(), Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::inplace_merge(Rng &&rng, Iter middle, Comp &&comp=Comp(), Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::inplace_merge(Iter first, Iter middle, Sent last, Comp &&comp=Comp(), Proj &&proj=Proj())
   :project: hpx
