/* Copyright (C) 2003 MySQL AB

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA */

#include <signaldata/AlterTable.hpp>

bool printALTER_TABLE_REQ(FILE * output, const Uint32 * theData, Uint32 len, Uint16 receiverBlockNo)
{
//  const AlterTableReq * const sig = (AlterTableReq *) theData;
  
  return false;
}

bool printALTER_TABLE_CONF(FILE * output, const Uint32 * theData, Uint32 len, Uint16 receiverBlockNo)
{
//  const AlterTableConf * const sig = (AlterTableConf *) theData;
  
  return false;
}

bool printALTER_TABLE_REF(FILE * output, const Uint32 * theData, Uint32 len, Uint16 receiverBlockNo)
{
//  const AlterTableRef * const sig = (AlterTableRef *) theData;
    
  return false;
}