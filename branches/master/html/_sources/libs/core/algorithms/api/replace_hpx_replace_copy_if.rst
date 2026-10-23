
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_replace_hpx_replace_copy_if_api:

--------------------
hpx::replace_copy_if
--------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::replace <modules_replace_hpx_replace_api>`
   - :ref:`hpx::replace_if <modules_replace_hpx_replace_if_api>`
   - :ref:`hpx::replace_copy <modules_replace_hpx_replace_copy_api>`

.. doxygenfunction:: hpx::replace_copy_if(InIter first, InIter last, OutIter dest, Pred &&pred, T const &new_value)
   :project: hpx
.. doxygenfunction:: hpx::replace_copy_if(ExPolicy &&policy, FwdIter1 first, FwdIter1 last, FwdIter2 dest, Pred &&pred, T const &new_value)
   :project: hpx
