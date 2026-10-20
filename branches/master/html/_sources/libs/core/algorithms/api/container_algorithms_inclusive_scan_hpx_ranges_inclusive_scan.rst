
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_inclusive_scan_hpx_ranges_inclusive_scan_api:

---------------------------
hpx::ranges::inclusive_scan
---------------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


.. doxygenfunction:: hpx::ranges::inclusive_scan(InIter first, Sent last, OutIter dest, Op &&op)
   :project: hpx
.. doxygenfunction:: hpx::ranges::inclusive_scan(ExPolicy &&policy, FwdIter1 first, Sent last, FwdIter2 dest, Op &&op)
   :project: hpx
.. doxygenfunction:: hpx::ranges::inclusive_scan(Rng &&rng, O dest, Op &&op)
   :project: hpx
.. doxygenfunction:: hpx::ranges::inclusive_scan(ExPolicy &&policy, Rng &&rng, O dest, Op &&op)
   :project: hpx
.. doxygenfunction:: hpx::ranges::inclusive_scan(InIter first, Sent last, OutIter dest, Op &&op, T init)
   :project: hpx
.. doxygenfunction:: hpx::ranges::inclusive_scan(ExPolicy &&policy, InIter first, Sent last, OutIter dest, Op &&op, T init)
   :project: hpx
.. doxygenfunction:: hpx::ranges::inclusive_scan(Rng &&rng, O dest, Op &&op, T init)
   :project: hpx
.. doxygenfunction:: hpx::ranges::inclusive_scan(ExPolicy &&policy, Rng &&rng, O dest, Op &&op, T init)
   :project: hpx
