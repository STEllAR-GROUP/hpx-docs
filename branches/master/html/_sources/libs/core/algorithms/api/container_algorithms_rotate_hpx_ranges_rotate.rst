
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_rotate_hpx_ranges_rotate_api:

-------------------
hpx::ranges::rotate
-------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::rotate_copy <modules_container_algorithms_rotate_hpx_ranges_rotate_copy_api>`

.. doxygenfunction:: hpx::ranges::rotate(FwdIter first, FwdIter middle, Sent last)
   :project: hpx
.. doxygenfunction:: hpx::ranges::rotate(ExPolicy &&policy, FwdIter first, FwdIter middle, Sent last)
   :project: hpx
.. doxygenfunction:: hpx::ranges::rotate(Rng &&rng, std::ranges::iterator_t< Rng > middle)
   :project: hpx
.. doxygenfunction:: hpx::ranges::rotate(ExPolicy &&policy, Rng &&rng, std::ranges::iterator_t< Rng > middle)
   :project: hpx
