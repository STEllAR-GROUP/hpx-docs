
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_remove_copy_hpx_ranges_remove_copy_api:

------------------------
hpx::ranges::remove_copy
------------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::remove_copy_if <modules_container_algorithms_remove_copy_hpx_ranges_remove_copy_if_api>`

.. doxygenfunction:: hpx::ranges::remove_copy(I first, Sent last, O dest, T const & value, Proj && proj)
   :project: hpx
.. doxygenfunction:: hpx::ranges::remove_copy(Rng && rng, O dest, T const & val, Proj && proj)
   :project: hpx
.. doxygenfunction:: hpx::ranges::remove_copy(ExPolicy && policy, I first, Sent last, O dest, T const & value, Proj && proj)
   :project: hpx
.. doxygenfunction:: hpx::ranges::remove_copy(ExPolicy && policy, Rng && rng, O dest, T const & value, Proj && proj)
   :project: hpx
