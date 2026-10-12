
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_all_reduce_hpx_collectives_all_reduce_api:

----------------------------
hpx::collectives::all_reduce
----------------------------

Defined in header hpx/collectives.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


.. doxygenfunction:: hpx::collectives::all_reduce(char const *basename, T &&result, F &&op, num_sites_arg num_sites=num_sites_arg(), this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg(), root_site_arg root_site=root_site_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::all_reduce(communicator comm, T &&result, F &&op, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::all_reduce(hpx::launch::sync_policy policy, char const *basename, T &&result, F &&op, num_sites_arg num_sites=num_sites_arg(), this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg(), root_site_arg root_site=root_site_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::all_reduce(hpx::launch::sync_policy policy, communicator comm, T &&result, F &&op, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
