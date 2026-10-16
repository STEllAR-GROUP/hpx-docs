
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_search_hpx_ranges_search_n_api:

---------------------
hpx::ranges::search_n
---------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::search <modules_container_algorithms_search_hpx_ranges_search_api>`

.. doxygenfunction:: hpx::ranges::search_n(FwdIter first, std::size_t count, FwdIter2 s_first, Sent s_last, Pred &&op=Pred(), Proj1 &&proj1=Proj1(), Proj2 &&proj2=Proj2())
   :project: hpx
.. doxygenfunction:: hpx::ranges::search_n(ExPolicy &&policy, FwdIter first, std::size_t count, FwdIter2 s_first, Sent2 s_last, Pred &&op=Pred(), Proj1 &&proj1=Proj1(), Proj2 &&proj2=Proj2())
   :project: hpx
.. doxygenfunction:: hpx::ranges::search_n(Rng1 &&rng1, std::size_t count, Rng2 &&rng2, Pred &&op=Pred(), Proj1 &&proj1=Proj1(), Proj2 &&proj2=Proj2())
   :project: hpx
.. doxygenfunction:: hpx::ranges::search_n(ExPolicy &&policy, Rng1 &&rng1, std::size_t count, Rng2 &&rng2, Pred &&op=Pred(), Proj1 &&proj1=Proj1(), Proj2 &&proj2=Proj2())
   :project: hpx
