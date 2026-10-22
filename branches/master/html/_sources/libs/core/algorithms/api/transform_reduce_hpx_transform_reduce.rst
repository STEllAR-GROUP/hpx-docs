
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_transform_reduce_hpx_transform_reduce_api:

---------------------
hpx::transform_reduce
---------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


.. doxygenfunction:: hpx::transform_reduce(ExPolicy &&policy, FwdIter first, FwdIter last, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(InIter first, InIter last, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(ExPolicy &&policy, FwdIter1 first1, FwdIter1 last1, FwdIter2 first2, T init)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(InIter1 first1, InIter1 last1, InIter2 first2, T init)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(ExPolicy &&policy, FwdIter1 first1, FwdIter1 last1, FwdIter2 first2, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(ExPolicy &&policy, InIter1 first1, InIter1 last1, InIter2 first2, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(ExPolicy &&policy, Iter first, Sent last, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(Iter first, Sent last, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(ExPolicy &&policy, Iter first, Sent last, Iter2 first2, T init)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(Iter first, Sent last, Iter2 first2, T init)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(ExPolicy &&policy, Iter first, Sent last, Iter2 first2, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(Iter first, Sent last, Iter2 first2, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(ExPolicy &&policy, Rng &&rng, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(Rng &&rng, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(ExPolicy &&policy, Rng &&rng, Iter2 first2, T init)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(Rng &&rng, Iter2 first2, T init)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(ExPolicy &&policy, Rng &&rng, Iter2 first2, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
.. doxygenfunction:: hpx::transform_reduce(Rng &&rng, Iter2 first2, T init, Reduce &&red_op, Convert &&conv_op)
   :project: hpx
