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

  Ptr<Aluno> aluno = CreateObject<Aluno> ();
  aluno->setNome("Patrick");
  aluno->m_curso = "Ciencia da Computacao";
  aluno->m_idade = 19;

  NS_LOG_UNCOND(aluno->getNome());
  NS_LOG_UNCOND(aluno->m_curso);
  NS_LOG_UNCOND(aluno->m_idade);
  aluno = 0; 
  return 0;
} 
