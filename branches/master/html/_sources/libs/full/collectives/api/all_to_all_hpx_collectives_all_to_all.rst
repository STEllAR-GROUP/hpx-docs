
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_all_to_all_hpx_collectives_all_to_all_api:

----------------------------
hpx::collectives::all_to_all
----------------------------

Defined in header hpx/collectives.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


.. doxygenfunction:: hpx::collectives::all_to_all(char const *basename, std::vector< T > &&local_result, num_sites_arg num_sites=num_sites_arg(), this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg(), root_site_arg root_site=root_site_arg(), pairwise_threshold_arg threshold=pairwise_threshold_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::all_to_all(communicator fid, std::vector< T > &&local_result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::all_to_all(hpx::launch::sync_policy policy, char const *basename, std::vector< T > &&local_result, num_sites_arg num_sites=num_sites_arg(), this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg(), root_site_arg root_site=root_site_arg(), pairwise_threshold_arg threshold=pairwise_threshold_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::all_to_all(hpx::launch::sync_policy policy, communicator fid, std::vector< T > &&local_result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
