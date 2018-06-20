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
 * Federal University of Juiz de Fora - (UFJF)
 */

#include "aluno.h"
//#include "integer.h"

Aluno::Aluno()
{
  NS_LOG_UNCOND ("Criando Aluno");
}

TypeId
Aluno::GetTypeId (void)
{
  static TypeId tid = TypeId ("Aluno")
    .SetParent<Object> ()
    .AddConstructor<Object> ()
    .AddAttribute ("Nome", 
                   "explicação",
                   StringValue("Sem nome"),
                   MakeStringAccessor (&Aluno::m_nome),
                   MakeStringChecker ())
    .GetAttribute("Nome", "Retorna o nome", MakeStringAccessor(&Aluno::m_nome))
    //.AddAttribute("Idade", "Idade do aluno", IntegerValue(18), MakeIntegerAccessor(&Aluno::m_idade), MakeIntegeChecker())
  ;
  return tid;
}

void
Aluno::DoDispose (void)
{
  Object::DoDispose ();
}
