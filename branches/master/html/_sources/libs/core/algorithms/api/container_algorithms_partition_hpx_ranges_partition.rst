
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_partition_hpx_ranges_partition_api:

----------------------
hpx::ranges::partition
----------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::stable_partition <modules_container_algorithms_partition_hpx_ranges_stable_partition_api>`
   - :ref:`hpx::ranges::partition_copy <modules_container_algorithms_partition_hpx_ranges_partition_copy_api>`

.. doxygenfunction:: hpx::ranges::partition(Rng &&rng, Pred &&pred, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::partition(ExPolicy &&policy, Rng &&rng, Pred &&pred, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::partition(FwdIter first, Sent last, Pred &&pred, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::partition(ExPolicy &&policy, FwdIter first, Sent last, Pred &&pred, Proj &&proj=Proj())
   :project: hpx
