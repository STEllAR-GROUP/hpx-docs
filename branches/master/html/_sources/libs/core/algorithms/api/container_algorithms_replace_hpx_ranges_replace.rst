
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_replace_hpx_ranges_replace_api:

--------------------
hpx::ranges::replace
--------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::replace_if <modules_container_algorithms_replace_hpx_ranges_replace_if_api>`
   - :ref:`hpx::ranges::replace_copy <modules_container_algorithms_replace_hpx_ranges_replace_copy_api>`
   - :ref:`hpx::ranges::replace_copy_if <modules_container_algorithms_replace_hpx_ranges_replace_copy_if_api>`

.. doxygenfunction:: hpx::ranges::replace(Iter first, Sent sent, T1 const &old_value, T2 const &new_value, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::replace(Rng &&rng, T1 const &old_value, T2 const &new_value, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::replace(ExPolicy &&policy, Iter first, Sent sent, T1 const &old_value, T2 const &new_value, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::replace(ExPolicy &&policy, Rng &&rng, T1 const &old_value, T2 const &new_value, Proj &&proj=Proj())
   :project: hpx
