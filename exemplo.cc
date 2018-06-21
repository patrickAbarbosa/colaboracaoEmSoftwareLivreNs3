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

#include <ns3/core-module.h>
#include "aluno.h"

using namespace ns3;

int
main(int argc, char *argv[])
{
  std::string nome = "Larissa";

  CommandLine cmd;
  cmd.AddValue("nome", "Descricao de ajuda", nome);
  cmd.Parse (argc, argv);

  Ptr<Aluno> a0 = CreateObject<Aluno> ();

  NS_LOG_UNCOND("Tipo do objeto: " << a0->GetTypeId());
  a0->SetAttribute("Nome", StringValue(nome));

  StringValue valor;
  a0->GetAttribute ("Nome", valor);
  NS_LOG_UNCOND("Nome Obj a0: " << valor.Get ());

  ObjectFactory fabrica;
  fabrica.SetTypeId("Aluno");
  fabrica.Set("Nome", StringValue("Fabrica"));
  
  Ptr<Object> obj0 = fabrica.Create<Aluno> ();
  Ptr<Object> obj1 = fabrica.Create<Aluno>();
  
  std::cout << std::endl << "--------" << std::endl;
  
  obj0->GetAttribute("Nome", valor);
  NS_LOG_UNCOND("Nome obj0: " << valor.Get());
  obj1->GetAttribute("Nome", valor);
  NS_LOG_UNCOND("Nome obj1: " << valor.Get());

  Config::SetDefault("Aluno::Nome", StringValue("Fernanda"));

  Ptr<Aluno> a1 = CreateObject<Aluno> ();

  a1->GetAttribute ("Nome", valor);
  NS_LOG_UNCOND("Nome Obj a1: " << valor.Get ());
  
  return 0;
}
