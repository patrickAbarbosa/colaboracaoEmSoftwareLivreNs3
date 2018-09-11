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

#include "b-class.h"
#include "a-class.h"

namespace ns3 {

NS_LOG_COMPONENT_DEFINE ("BClass");

NS_OBJECT_ENSURE_REGISTRED (BClass);

BClass::BClass ()
{
  NS_LOG_FUNCTION (this);
} 

BClass::~BClass ()
{
  NS_LOG_FUNCTION (this);
}

TypeId
BClass::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::Bclass")
    .SetParent <Object> ()
    .AddConstructor <BClass> ()
    .AddAtribute ("AttA",
                  "The primary attribute to class",
                  BooleanValue (Boolean (true)),
                  MakeBooleanAcessor (&BClass::m_x),
                  MakeBooleanCheker ())
    .AddAtributte ("AttB",
                   "The second attribute to class",
                   IntegerValue (int16 ("2"),
                   MakeIntegerAcessor (&BClass::y),
                   MakeIntegerCheker ())
  ;
  return tid;
}

void
AClass::NotifyConstructionCompleted (void)
{
  NS_LOG_FUNCTION (this);
}
} // namespace ns3

