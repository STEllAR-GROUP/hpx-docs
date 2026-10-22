
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_all_gather_hpx_collectives_all_gather_api:

----------------------------
hpx::collectives::all_gather
----------------------------

Defined in header hpx/collectives.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


.. doxygenfunction:: hpx::collectives::all_gather(char const * basename, T && result, num_sites_arg num_sites, this_site_arg this_site, generation_arg generation, root_site_arg root_site)
   :project: hpx
.. doxygenfunction:: hpx::collectives::all_gather(communicator comm, T && result, this_site_arg this_site, generation_arg generation)
   :project: hpx
.. doxygenfunction:: hpx::collectives::all_gather(hpx::launch::sync_policy, char const * basename, T && result, num_sites_arg num_sites, this_site_arg this_site, generation_arg generation, root_site_arg root_site)
   :project: hpx
.. doxygenfunction:: hpx::collectives::all_gather(hpx::launch::sync_policy, communicator comm, T && result, this_site_arg this_site, generation_arg generation)
   :project: hpx
