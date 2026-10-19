
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_scatter_hpx_collectives_scatter_to_api:

----------------------------
hpx::collectives::scatter_to
----------------------------

Defined in header hpx/collectives.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::collectives::scatter_from <modules_scatter_hpx_collectives_scatter_from_api>`

.. doxygenfunction:: hpx::collectives::scatter_to(char const *basename, std::vector< T > &&result, num_sites_arg num_sites=num_sites_arg(), this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::scatter_to(communicator comm, std::vector< T > &&result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::scatter_to(hpx::launch::sync_policy, char const *basename, std::vector< T > &&result, num_sites_arg num_sites=num_sites_arg(), this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::scatter_to(hpx::launch::sync_policy, communicator comm, std::vector< T > &&result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
