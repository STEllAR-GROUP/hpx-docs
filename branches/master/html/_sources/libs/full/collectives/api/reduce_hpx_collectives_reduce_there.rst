
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_reduce_hpx_collectives_reduce_there_api:

------------------------------
hpx::collectives::reduce_there
------------------------------

Defined in header hpx/collectives.hpp.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::collectives::reduce_here <modules_reduce_hpx_collectives_reduce_here_api>`

.. doxygenfunction:: hpx::collectives::reduce_there(char const *basename, T &&result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg(), root_site_arg root_site=root_site_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::reduce_there(communicator comm, T &&result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::reduce_there(hpx::launch::sync_policy, char const *basename, T &&result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg(), root_site_arg root_site=root_site_arg())
   :project: hpx
.. doxygenfunction:: hpx::collectives::reduce_there(hpx::launch::sync_policy, communicator comm, T &&result, this_site_arg this_site=this_site_arg(), generation_arg generation=generation_arg())
   :project: hpx
