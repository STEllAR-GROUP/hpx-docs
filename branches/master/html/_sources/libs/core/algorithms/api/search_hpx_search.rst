
..
    Copyright (C) 2022-2026 Dimitra Karatza
    Copyright (C) 2022-2026 The STE||AR Group

    SPDX-License-Identifier: BSL-1.0
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

.. _modules_search_hpx_search_api:

-----------
hpx::search
-----------

Defined in header :hpx-header:`libs/full/include/include,hpx/algorithm.hpp`.

See :ref:`public_api` for a list of names and headers that are part of the public
|hpx| API.


See also:

   - :ref:`hpx::search_n <modules_search_hpx_search_n_api>`

.. doxygenfunction:: hpx::search(FwdIter first, FwdIter last, FwdIter2 s_first, FwdIter2 s_last, Pred &&op=Pred())
   :project: hpx
.. doxygenfunction:: hpx::search(ExPolicy &&policy, FwdIter first, FwdIter last, FwdIter2 s_first, FwdIter2 s_last, Pred &&op=Pred())
   :project: hpx
.. doxygenfunction:: hpx::search(FwdIter first, FwdIter last, Searcher &&searcher)
   :project: hpx
.. doxygenfunction:: hpx::search(ExPolicy &&policy, FwdIter first, FwdIter last, Searcher &&searcher)
   :project: hpx
