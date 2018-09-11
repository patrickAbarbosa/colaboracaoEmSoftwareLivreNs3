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

#include "c-class.h"

namespace ns3 {

NS_LOG_COMPONENT_DEFINE ("CClass");

NS_OBJECT_ENSURE_REGISTRED (CClass);

CClass::CClass ()
{
  NS_LOG_FUNCTION (this);
} 

CClass::~CClass ()
{
  NS_LOG_FUNCTION (this);
}

TypeId
CClass::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::CClass")
    .SetParent <Object> ()
    .AddConstructor <CClass> ()
    .AddAtribute ("FactoryAtt",
                  "The single factory in this class",
                  ObjectFactoryValue (ObjectFactory ("ns3:UniformRandonVariable")),
                  MakeObjectFactoryAcessor (&AClass::m_factory),
                  MakeObjectFactoryCheker ())
    .AddAtribute ("Integer",
                  "The single integer in this class",
                  IntegerValue (Integer (2)),
                  MakeIntegerAcessor (&CClass::m_integer),
                  MakeOIntegerCheker ())
  ;
  return tid;
}

void
AClass::NotifyConstructionCompleted (void)
{
  NS_LOG_FUNCTION (this);

  m_obj = m_factory.Create ();
}
} // namespace ns3

