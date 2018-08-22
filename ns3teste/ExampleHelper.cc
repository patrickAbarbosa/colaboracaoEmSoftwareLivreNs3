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
 * Author: Patrick Barbosa < patrickbarbosa@ice.ufjf.br >
 * Federal University of Juiz de Fora - (UFJF)
 */

#include "example-helper.h"

namespace ns3 { 

NS_LOG_COMPONENT_DEFINE("ExampleHelper");

NS_OBJECT_ENSURE_REGISTERED (ExampleHelper);

ExampleHelper::ExampleHelper ()
{
  NS_LOG_FUNCTION (this);
}

ExampleHelper::~ExampleHelper ()
{
  NS_LOG_FUNCTION (this);
}

TypeId
ExampleHelper::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::ExampleHelper")
    .SetParent <Object> ()
    .AddConstructor <ExampleHelper> ()
    .AddAttribute ("FactoryAtt", 
                   "The single factory in this class.",
                   ObjectFactoryValue (ObjectFactory ()),
                   MakeObjectFactoryAccessor (&ExampleHelper::m_factory),
                   MakeObjectFactoryChecker ())
  ;
  return tid;
}

void
ExampleHelper::DoDispose (void)
{
  NS_LOG_FUNCTION (this);
  Object::DoDispose ();
}

void
ExampleHelper::NotifyConstructionCompleted (void)
{
  NS_LOG_FUNCTION (this);

  //std::cout << m_factory.GetTypeId () << std::endl;
  Ptr<Object> a = m_factory.Create ();
  std::cout << a->GetTypeId () << std::endl;
}
} // namespace ns3

