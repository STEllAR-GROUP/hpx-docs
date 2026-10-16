
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_fold_hpx_ranges_fold_left_with_iter_api:

--------------------------------
hpx::ranges::fold_left_with_iter
--------------------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::fold_left <modules_fold_hpx_ranges_fold_left_api>`
   - :ref:`hpx::ranges::fold_left_first <modules_fold_hpx_ranges_fold_left_first_api>`
   - :ref:`hpx::ranges::fold_right <modules_fold_hpx_ranges_fold_right_api>`
   - :ref:`hpx::ranges::fold_right_last <modules_fold_hpx_ranges_fold_right_last_api>`
   - :ref:`hpx::ranges::fold_left_first_with_iter <modules_fold_hpx_ranges_fold_left_first_with_iter_api>`

.. doxygenfunction:: hpx::ranges::fold_left_with_iter(InIter first, Sent last, T init, F f) -> fold_left_with_iter_result< InIter, std::decay_t< std::invoke_result_t< F &, T, std::iter_reference_t< InIter >>>>
   :project: hpx
.. doxygenfunction:: hpx::ranges::fold_left_with_iter(Rng &&rng, T init, F f) -> fold_left_with_iter_result< std::ranges::iterator_t< Rng >, std::decay_t< std::invoke_result_t< F &, T, std::ranges::range_reference_t< Rng >>>>
   :project: hpx
