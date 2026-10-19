
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_broadcast_hpx_collectives_broadcast_to_api:

------------------------------
hpx::collectives::broadcast_to
------------------------------

Defined in header hpx/collectives.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::collectives::broadcast_from <modules_broadcast_hpx_collectives_broadcast_from_api>`

.. doxygenfunction:: hpx::collectives::broadcast_to(char const *basename, T &&local_result, num_sites_arg num_sites=num_sites_arg(), this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::broadcast_to(communicator comm, T &&local_result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::broadcast_to(communicator comm, generation_arg generation, T &&local_result, this_site_arg this_site=this_site_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::broadcast_to(hpx::launch::sync_policy policy, char const *basename, T &&local_result, num_sites_arg num_sites=num_sites_arg(), this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::broadcast_to(hpx::launch::sync_policy policy, communicator comm, T &&local_result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
