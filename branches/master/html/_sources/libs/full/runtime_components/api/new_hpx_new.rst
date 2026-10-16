
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_new_hpx_new_api:

---------
hpx::new_
---------

Defined in header hpx/components.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


.. doxygenfunction:: hpx::new_(id_type const &locality, Ts &&... vs)
   :project: hpx
.. doxygenfunction:: hpx::new_(id_type const &locality, std::size_t count, Ts &&... vs)
   :project: hpx
.. doxygenfunction:: hpx::new_(DistPolicy const &policy, Ts &&... vs)
   :project: hpx
.. doxygenfunction:: hpx::new_(DistPolicy const &policy, std::size_t count, Ts &&... vs)
   :project: hpx
