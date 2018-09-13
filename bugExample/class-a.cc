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
#include "class-a.h"

namespace ns3 {

NS_LOG_COMPONENT_DEFINE ("ClassA");
NS_OBJECT_ENSURE_REGISTERED (ClassC);
NS_OBJECT_ENSURE_REGISTERED (ClassB);
NS_OBJECT_ENSURE_REGISTERED (ClassA);

ClassA::ClassA ()
{
  NS_LOG_FUNCTION (this);
} 

ClassA::~ClassA ()
{
  NS_LOG_FUNCTION (this);
}

TypeId
ClassA::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::ClassA")
    .SetParent<Object> ()
    .AddConstructor<ClassA> ()
    .AddAttribute ("AttFactory", "The single factory in this class",
                   ObjectFactoryValue (ObjectFactory ("ns3::ClassB")),
                   MakeObjectFactoryAccessor (&ClassA::m_factory),
                   MakeObjectFactoryChecker ())
  ;
  return tid;
}

void
ClassA::DoDispose (void)
{
  NS_LOG_FUNCTION (this);
  m_ptrToB = 0;
}

void
ClassA::NotifyConstructionCompleted (void)
{
  NS_LOG_FUNCTION (this);
  m_ptrToB = m_factory.Create<ClassB> ();

  std::cout << "ClassB::AttW=" << m_ptrToB->m_w << " "
            << "ClassB::AttZ=" << m_ptrToB->m_z << " "
            << "ClassB::AttPointer->ClassC::AttX=" << m_ptrToB->m_ptrToC->m_x << " "
            << "ClassB::AttPointer->ClassC::AttY=" << m_ptrToB->m_ptrToC->m_y << " "
            << std::endl; 
}

} // namespace ns3
