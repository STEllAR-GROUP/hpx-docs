
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_reference_wrapper_hpx_ref_api:

--------
hpx::ref
--------

Defined in header :hpx-header:`libs/core/include_local/include,hpx/functional.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::reference_wrapper <modules_reference_wrapper_hpx_reference_wrapper_api>`
   - :ref:`hpx::cref <modules_reference_wrapper_hpx_cref_api>`

.. doxygenfunction:: hpx::ref(T &val) noexcept
   :project: hpx
.. doxygenfunction:: hpx::ref(T const &&)=delete
   :project: hpx
.. doxygenfunction:: hpx::ref(reference_wrapper< T > val) noexcept
   :project: hpx
.. doxygenfunction:: hpx::ref(T &&val) noexcept
   :project: hpx
