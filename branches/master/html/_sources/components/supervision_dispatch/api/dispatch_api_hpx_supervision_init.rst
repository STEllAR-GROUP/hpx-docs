
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_dispatch_api_hpx_supervision_init_api:

----------------------
hpx::supervision::init
----------------------

Defined in header hpx/supervision_dispatch.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::supervision::finalize <modules_dispatch_api_hpx_supervision_finalize_api>`
   - :ref:`hpx::supervision::is_initialized <modules_dispatch_api_hpx_supervision_is_initialized_api>`

.. doxygenfunction:: hpx::supervision::init(hpx::chrono::steady_duration const &discovery_timeout=default_discovery_timeout)
   :project: hpx
.. doxygenfunction:: hpx::supervision::init(hpx::launch::sync_policy policy, hpx::chrono::steady_duration const &discovery_timeout=default_discovery_timeout)
   :project: hpx
