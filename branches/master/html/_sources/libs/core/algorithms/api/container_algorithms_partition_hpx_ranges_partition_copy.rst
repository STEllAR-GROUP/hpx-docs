
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_partition_hpx_ranges_partition_copy_api:

---------------------------
hpx::ranges::partition_copy
---------------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::partition <modules_container_algorithms_partition_hpx_ranges_partition_api>`
   - :ref:`hpx::ranges::stable_partition <modules_container_algorithms_partition_hpx_ranges_stable_partition_api>`

.. doxygenfunction:: hpx::ranges::partition_copy(Rng &&rng, OutIter2 dest_true, OutIter3 dest_false, Pred &&pred, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::partition_copy(ExPolicy &&policy, Rng &&rng, FwdIter2 dest_true, FwdIter3 dest_false, Pred &&pred, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::partition_copy(InIter first, Sent last, OutIter2 dest_true, OutIter3 dest_false, Pred &&pred, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::partition_copy(ExPolicy &&policy, FwdIter first, Sent last, OutIter2 dest_true, OutIter3 dest_false, Pred &&pred, Proj &&proj=Proj())
   :project: hpx
