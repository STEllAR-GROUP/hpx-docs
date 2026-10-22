
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_any_hpx_any_cast_api:

-------------
hpx::any_cast
-------------

Defined in header :hpx-header:`libs/core/include_local/include,hpx/any.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::any_nonser. hpx::bad_any_cast <modules_any_hpx_any_nonser_hpx_bad_any_cast_api>`
   - :ref:`hpx::unique_any_nonser <modules_any_hpx_unique_any_nonser_api>`
   - :ref:`hpx::make_any_nonser <modules_any_hpx_make_any_nonser_api>`
   - :ref:`hpx::make_unique_any_nonser <modules_any_hpx_make_unique_any_nonser_api>`

.. doxygenfunction:: hpx::any_cast(util::basic_any< IArch, OArch, Char, Copyable > *operand) noexcept
   :project: hpx
.. doxygenfunction:: hpx::any_cast(util::basic_any< IArch, OArch, Char, Copyable > const *operand) noexcept
   :project: hpx
.. doxygenfunction:: hpx::any_cast(util::basic_any< IArch, OArch, Char, Copyable > &operand)
   :project: hpx
.. doxygenfunction:: hpx::any_cast(util::basic_any< IArch, OArch, Char, Copyable > const &operand)
   :project: hpx
