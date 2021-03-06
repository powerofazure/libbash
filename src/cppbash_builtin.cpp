/*
   Copyright 2010 Nathan Eloe

   This file is part of libbash.

   libbash is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 2 of the License, or
   (at your option) any later version.

   libbash is distributed in the hope that it will be useful,but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with libbash.  If not, see <http://www.gnu.org/licenses/>.
   */
///
/// \file cppbash_builtin.cpp
/// \author Nathan Eloe
/// \brief Implementation of class to inherit builtins from
///

#include "cppbash_builtin.h"

cppbash_builtin::cppbash_builtin(std::ostream &outstream, std::ostream &errstream, std::istream &instream): _out_stream(&outstream), _err_stream(&errstream), _inp_stream(&instream)
{
}

