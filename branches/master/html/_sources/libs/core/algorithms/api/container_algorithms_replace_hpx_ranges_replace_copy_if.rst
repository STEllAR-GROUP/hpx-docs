
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_container_algorithms_replace_hpx_ranges_replace_copy_if_api:

----------------------------
hpx::ranges::replace_copy_if
----------------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::ranges::replace <modules_container_algorithms_replace_hpx_ranges_replace_api>`
   - :ref:`hpx::ranges::replace_if <modules_container_algorithms_replace_hpx_ranges_replace_if_api>`
   - :ref:`hpx::ranges::replace_copy <modules_container_algorithms_replace_hpx_ranges_replace_copy_api>`

.. doxygenfunction:: hpx::ranges::replace_copy_if(InIter first, Sent sent, OutIter dest, Pred &&pred, T const &new_value, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::replace_copy_if(Rng &&rng, OutIter dest, Pred &&pred, T const &new_value, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::replace_copy_if(ExPolicy &&policy, FwdIter1 first, Sent sent, FwdIter2 dest, Pred &&pred, T const &new_value, Proj &&proj=Proj())
   :project: hpx
.. doxygenfunction:: hpx::ranges::replace_copy_if(ExPolicy &&policy, Rng &&rng, FwdIter dest, Pred &&pred, T const &new_value, Proj &&proj=Proj())
   :project: hpx
