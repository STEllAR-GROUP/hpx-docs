
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_transform_exclusive_scan_hpx_transform_exclusive_scan_api:

-----------------------------
hpx::transform_exclusive_scan
-----------------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


.. doxygenfunction:: hpx::transform_exclusive_scan(InIter first, InIter last, OutIter dest, T init, BinOp &&binary_op, UnOp &&unary_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_exclusive_scan(ExPolicy &&policy, FwdIter1 first, FwdIter1 last, FwdIter2 dest, T init, BinOp &&binary_op, UnOp &&unary_op)
   :project: hpx
