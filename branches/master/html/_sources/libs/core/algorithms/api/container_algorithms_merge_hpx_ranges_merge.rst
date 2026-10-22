
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_merge_hpx_ranges_merge_api:

------------------
hpx::ranges::merge
------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::inplace_merge <modules_container_algorithms_merge_hpx_ranges_inplace_merge_api>`

.. doxygenfunction:: hpx::ranges::merge(ExPolicy &&policy, Rng1 &&rng1, Rng2 &&rng2, Iter3 dest, Comp &&comp=Comp(), Proj1 &&proj1=Proj1(), Proj2 &&proj2=Proj2())
   :project: hpx
.. doxygenfunction:: hpx::ranges::merge(ExPolicy &&policy, Iter1 first1, Sent1 last1, Iter2 first2, Sent2 last2, Iter3 dest, Comp &&comp=Comp(), Proj1 &&proj1=Proj1(), Proj2 &&proj2=Proj2())
   :project: hpx
.. doxygenfunction:: hpx::ranges::merge(Rng1 &&rng1, Rng2 &&rng2, Iter3 dest, Comp &&comp=Comp(), Proj1 &&proj1=Proj1(), Proj2 &&proj2=Proj2())
   :project: hpx
.. doxygenfunction:: hpx::ranges::merge(Iter1 first1, Sent1 last1, Iter2 first2, Sent2 last2, Iter3 dest, Comp &&comp=Comp(), Proj1 &&proj1=Proj1(), Proj2 &&proj2=Proj2())
   :project: hpx
