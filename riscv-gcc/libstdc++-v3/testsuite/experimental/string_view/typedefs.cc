// { dg-do compile { target c++14 } }

// Copyright (C) 2014-2019 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <experimental/string_view>

template<typename C, typename T>
  using check1_t = std::experimental::fundamentals_v1::basic_string_view<C, T>;

using check2_t = std::experimental::fundamentals_v1::string_view;

#ifdef _GLIBCXX_USE_CHAR8_T
using check3_t = std::experimental::fundamentals_v1::u8string_view;
#endif

#ifdef _GLIBCXX_USE_C99_STDINT_TR1
using check4_t = std::experimental::fundamentals_v1::u16string_view;
using check5_t = std::experimental::fundamentals_v1::u32string_view;
#endif

#ifdef _GLIBCXX_USE_WCHAR_T
using check6_t = std::experimental::fundamentals_v1::wstring_view;
#endif
