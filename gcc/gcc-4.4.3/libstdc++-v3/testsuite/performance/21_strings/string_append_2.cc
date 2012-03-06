// Copyright (C) 2004, 2009 Free Software Foundation, Inc.
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


#include <string>
#include <testsuite_performance.h>

// Short strings didn't grow quickly...
void test01()
{
  using namespace __gnu_test;
  time_counter time;
  resource_counter resource;

  start_counters(time, resource);
  for (unsigned i = 0; i < 200000; ++i)
    {
      std::string a;
      for (unsigned j = 0; j < 400; ++j)
	a.append(1, 'x');
    }
  stop_counters(time, resource);

  report_performance(__FILE__, "", time, resource);
  clear_counters(time, resource);
}

int main()
{
  test01();
  return 0;
}