
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_supervision_api_hpx_supervision_await_terminal_api:

--------------------------------
hpx::supervision::await_terminal
--------------------------------

Defined in header hpx/supervision.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::supervision::publish_event <modules_supervision_api_hpx_supervision_publish_event_api>`
   - :ref:`hpx::supervision::query_state <modules_supervision_api_hpx_supervision_query_state_api>`
   - :ref:`hpx::supervision::register_observer <modules_supervision_api_hpx_supervision_register_observer_api>`
   - :ref:`hpx::supervision::unregister_observer <modules_supervision_api_hpx_supervision_unregister_observer_api>`
   - :ref:`hpx::supervision::remove_target <modules_supervision_api_hpx_supervision_remove_target_api>`
   - :ref:`hpx::supervision::register_activity_observer <modules_supervision_api_hpx_supervision_register_activity_observer_api>`
   - :ref:`hpx::supervision::unregister_activity_observer <modules_supervision_api_hpx_supervision_unregister_activity_observer_api>`
   - :ref:`hpx::supervision::check_admission <modules_supervision_api_hpx_supervision_check_admission_api>`
   - :ref:`hpx::supervision::is_valid_transition <modules_supervision_api_hpx_supervision_is_valid_transition_api>`

.. doxygenfunction:: hpx::supervision::await_terminal(hpx::id_type const &locality, hpx::id_type const &target, std::uint64_t epoch=0, std::optional< std::chrono::steady_clock::duration > timeout=std::nullopt)
   :project: hpx
.. doxygenfunction:: hpx::supervision::await_terminal(hpx::launch::sync_policy, hpx::id_type const &locality, hpx::id_type const &target, std::uint64_t epoch=0, std::optional< std::chrono::steady_clock::duration > timeout=std::nullopt, hpx::error_code &ec=hpx::throws)
   :project: hpx
.. doxygenfunction:: hpx::supervision::await_terminal(hpx::id_type const &target, std::uint64_t epoch=0, std::optional< std::chrono::steady_clock::duration > timeout=std::nullopt)
   :project: hpx
.. doxygenfunction:: hpx::supervision::await_terminal(hpx::launch::sync_policy, hpx::id_type const &target, std::uint64_t epoch=0, std::optional< std::chrono::steady_clock::duration > timeout=std::nullopt, hpx::error_code &ec=hpx::throws)
   :project: hpx
