
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_unique_hpx_ranges_unique_copy_api:

------------------------
hpx::ranges::unique_copy
------------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::unique <modules_container_algorithms_unique_hpx_ranges_unique_api>`

.. doxygenfunction:: hpx::ranges::unique_copy(InIter first, Sent last, O dest, Pred &&pred=Pred(), Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::unique_copy(ExPolicy &&policy, FwdIter first, Sent last, O dest, Pred &&pred=Pred(), Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::unique_copy(Rng &&rng, O dest, Pred &&pred=Pred(), Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::unique_copy(ExPolicy &&policy, Rng &&rng, O dest, Pred &&pred=Pred(), Proj &&proj=Proj())
   :project: hpx
