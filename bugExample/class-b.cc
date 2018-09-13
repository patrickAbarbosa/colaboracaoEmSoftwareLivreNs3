/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Federal University of Juiz de Fora - (UFJF)
 */

#include "class-c.h"
#include "class-b.h"

namespace ns3 {

NS_LOG_COMPONENT_DEFINE ("ClassB");
NS_OBJECT_ENSURE_REGISTERED (ClassB);

ClassB::ClassB ()
{
  NS_LOG_FUNCTION (this);
} 

ClassB::~ClassB ()
{
  NS_LOG_FUNCTION (this);
}

TypeId
ClassB::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::ClassB")
    .SetParent<Object> ()
    .AddConstructor<ClassB> ()
    .AddAttribute ("AttPointer", "The pointer to another class",
                   StringValue ("ns3::ClassC"),
                   MakePointerAccessor (&ClassB::m_ptrToC),
                   MakePointerChecker<ClassC> ())
    .AddAttribute ("AttW", "The W attribute",
                   IntegerValue (0),
                   MakeIntegerAccessor (&ClassB::m_w),
                   MakeIntegerChecker<int16_t> ())
    .AddAttribute ("AttZ", "The Z attribute",
                   IntegerValue (0),
                   MakeIntegerAccessor (&ClassB::m_z),
                   MakeIntegerChecker<int16_t> ())
  ;
  return tid;
}

void
ClassB::DoDispose (void)
{
  NS_LOG_FUNCTION (this);
  m_ptrToC = 0;
}

} // namespace ns3

