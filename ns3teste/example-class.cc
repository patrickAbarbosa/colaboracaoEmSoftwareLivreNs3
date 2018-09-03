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

#include "example-class.h"

namespace ns3 {

NS_LOG_COMPONENT_DEFINE("ExampleClass");

NS_OBJECT_ENSURE_REGISTERED (ExampleClass);

ExampleClass::ExampleClass ()
{
  NS_LOG_FUNCTION (this);
}

ExampleClass::~ExampleClass ()
{
  NS_LOG_FUNCTION (this);
}

TypeId
ExampleClass::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::ExampleClass")
    .SetParent <Object> ()
    .AddConstructor <ExampleClass> ()
    .AddAttribute ("RngPointer",
                   "The pointer to a random number generator",
                   StringValue ("ns3::UniformRandomVariable"),
                   MakePointerAccessor (&ExampleClass::m_rng),
                   MakePointerChecker<RandomVariableStream> ())
    .AddAttribute ("TesteBool",
                   "The boolean value for testing.",
                   BooleanValue (true),
                   MakeBooleanAccessor (&ExampleClass::m_bool),
                   MakeBooleanChecker ())
  ;
  return tid;
}

void
ExampleClass::DoDispose (void)
{
  NS_LOG_FUNCTION (this);
  Object::DoDispose ();
}

void
ExampleClass::NotifyConstructionCompleted (void)
{
  NS_LOG_FUNCTION (this);

  std::cout << "RngPointer type: " << m_rng->GetTypeId ().GetName () << std::endl;
  std::cout << "Boolean value: " << m_bool << std::endl;

  std::cout << "Random values: ";
  for (int i = 0; i < 10; i++)
    std::cout << m_rng->GetValue () << " ";

  std::cout << std::endl;
}

} // namespace ns3

