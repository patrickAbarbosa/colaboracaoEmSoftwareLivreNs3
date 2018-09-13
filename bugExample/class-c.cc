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

namespace ns3 {

NS_LOG_COMPONENT_DEFINE ("ClassC");
NS_OBJECT_ENSURE_REGISTERED (ClassC);

ClassC::ClassC ()
{
  NS_LOG_FUNCTION (this);
} 

ClassC::~ClassC ()
{
  NS_LOG_FUNCTION (this);
}

TypeId
ClassC::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::ClassC")
    .SetParent<Object> ()
    .AddConstructor<ClassC> ()
    .AddAttribute ("AttX", "The X attribute",
                   IntegerValue (0),
                   MakeIntegerAccessor (&ClassC::m_x),
                   MakeIntegerChecker<int16_t> ())
    .AddAttribute ("AttY", "The Y attribute",
                   IntegerValue (0),
                   MakeIntegerAccessor (&ClassC::m_y),
                   MakeIntegerChecker<int16_t> ())
  ;
  return tid;
}

void
ClassC::DoDispose (void)
{
  NS_LOG_FUNCTION (this);
}

} // namespace ns3
