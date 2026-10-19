
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_sync_hpx_sync_api:

---------
hpx::sync
---------

Defined in header :hpx-header:`libs/full/include/include,hpx/future.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


.. seealso::
   :hpx:func:`hpx::sync (distributed)`

.. doxygenfunction:: hpx::sync(F &&f, Ts &&... ts)
   :project: hpx
.. doxygenfunction:: hpx::sync(F &&f, Ts &&... ts) -> decltype(detail::sync_action_dispatch< Action, std::decay_t< F >>::call(std::forward< F >(f), std::forward< Ts >(ts)...))
   :project: hpx
.. doxygenfunction:: hpx::sync(Action &&action, Target &&target, Ts &&... ts)
   :project: hpx
