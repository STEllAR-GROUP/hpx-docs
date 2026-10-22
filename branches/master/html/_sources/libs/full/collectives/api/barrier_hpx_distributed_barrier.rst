
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_barrier_hpx_distributed_barrier_api:

-------------------------
hpx::distributed::barrier
-------------------------

Defined in header :hpx-header:`libs/full/include/include,hpx/barrier.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


.. doxygenfunction:: hpx::distributed::barrier(std::string const &base_name)
   :project: hpx
.. doxygenfunction:: hpx::distributed::barrier(std::string const &base_name, std::size_t num)
   :project: hpx
.. doxygenfunction:: hpx::distributed::barrier(std::string const &base_name, std::size_t num, std::size_t rank)
   :project: hpx
.. doxygenfunction:: hpx::distributed::barrier(std::string const &base_name, std::vector< std::size_t > const &ranks, std::size_t rank)
   :project: hpx
