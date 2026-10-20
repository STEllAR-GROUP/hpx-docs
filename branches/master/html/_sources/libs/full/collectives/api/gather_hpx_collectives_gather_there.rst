
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_gather_hpx_collectives_gather_there_api:

------------------------------
hpx::collectives::gather_there
------------------------------

Defined in header hpx/collectives.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::collectives::gather_here <modules_gather_hpx_collectives_gather_here_api>`

.. doxygenfunction:: hpx::collectives::gather_there(char const *basename, T &&result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg(), root_site_arg root_site=root_site_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::gather_there(communicator comm, T &&result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::gather_there(hpx::launch::sync_policy, char const *basename, T &&result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg(), root_site_arg root_site=root_site_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::gather_there(hpx::launch::sync_policy, communicator comm, T &&result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
