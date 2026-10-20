
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_init_impl_hpx_init_api:

---------
hpx::init
---------

Defined in header :hpx-header:`libs/full/init_runtime/include,hpx/init.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


.. doxygenfunction:: hpx::init(std::function< int(hpx::program_options::variables_map &)> f, int argc, char **argv, init_params const &params=init_params())
   :project: hpx
.. doxygenfunction:: hpx::init(std::function< int(int, char **)> f, int argc, char **argv, init_params const &params=init_params())
   :project: hpx
.. doxygenfunction:: hpx::init(int argc, char **argv, init_params const &params=init_params())
   :project: hpx
.. doxygenfunction:: hpx::init(std::nullptr_t f, int argc, char **argv, init_params const &params=init_params())
   :project: hpx
.. doxygenfunction:: hpx::init(init_params const &params=init_params())
   :project: hpx
