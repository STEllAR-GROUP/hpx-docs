
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_dispatch_work_hpx_supervision_dispatch_work_api:

-------------------------------
hpx::supervision::dispatch_work
-------------------------------

Defined in header hpx/supervision_dispatch.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::supervision::invoke_fenced_action <modules_dispatch_work_hpx_supervision_invoke_fenced_action_api>`

.. doxygenfunction:: hpx::supervision::dispatch_work(hpx::id_type const &target, std::uint64_t const epoch, Ts &&... ts)
   :project: hpx
.. doxygenfunction:: hpx::supervision::dispatch_work(Action, hpx::id_type const &target, std::uint64_t const epoch, Ts &&... ts)
   :project: hpx
.. doxygenfunction:: hpx::supervision::dispatch_work(Action, discovered_peer const &peer, Ts &&... ts)
   :project: hpx
