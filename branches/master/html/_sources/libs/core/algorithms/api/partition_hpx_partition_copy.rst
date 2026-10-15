
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_partition_hpx_partition_copy_api:

-------------------
hpx::partition_copy
-------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::partition <modules_partition_hpx_partition_api>`
   - :ref:`hpx::stable_partition <modules_partition_hpx_stable_partition_api>`

.. doxygenfunction:: hpx::partition_copy(FwdIter1 first, FwdIter1 last, FwdIter2 dest_true, FwdIter3 dest_false, Pred &&pred, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::partition_copy(ExPolicy &&policy, FwdIter1 first, FwdIter1 last, FwdIter2 dest_true, FwdIter3 dest_false, Pred &&pred, Proj &&proj=Proj())
   :project: hpx
