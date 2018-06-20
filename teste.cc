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
 * Author: Patrick Barbosa < patrickbarbosa@ice.ufjf.br >
 */

#include <ns3/core-module.h>
#include "aluno.h"


using namespace ns3;

int
main(int argc, char *argv[])
{
  NS_LOG_UNCOND("Hello Patrick");

  Ptr<Aluno> a0 = CreateObject<Aluno> ();
  Ptr<Aluno> a1 = CreateObject<Aluno> ();

  
  //a0->m_idade = 19;
  //NS_LOG_UNCOND("Nome a0: " << a0->getNome());
  a1->SetAttribute("Nome", StringValue("Larissa"));
  a0->SetAttribute("Nome", StringValue("Fernanda"));
  //a1->m_idade = 21;
  
  std::cout<<"A0: " <<a0->GetTypeId() << std::endl;

  NS_LOG_UNCOND(a0->GetAttribute("Nome", ptr));
  //NS_LOG_UNCOND(a0->m_idade);
  //NS_LOG_UNCOND(a1->getNome());
  a0 = 0;
  a1 = 0; 

  Simulator::Run ();
  Simulator::Destroy ();
} 
