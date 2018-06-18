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

#include "turma.h"

Turma::Turma()
{
  m_tam = 0;
  NS_LOG_UNCOND ("Turma");
}
/* GetTypeId guada o tipo de ponteiro do objeto e sua posição,
 * assim simplificando sua modificação;
 *
 */
TypeId
Turma::GetTypeId (void)
{
  /* O TypeId tid serve para identificar seu o ponteiro,
   * recebendo geralmente o nome da classe.
   */
  static TypeId tid = TypeId ("Turma") //classe Turma
     .SetParent<Object> ()
    .SetGroupName("Escola") //Grupo do qual seu objeto participa
    .AddConstructor<Object> ()//recebe o objeto para que o construtor guarde-o
    //.AddTranceSouce("Name", "Descrição do método", MakeTraceSourceAcessor(&Turma:m_tam), "ns3 :: TracedValueCallback :: Int32")  
  ;
  return tid;
}

void
Aluno::DoDispose (void) 
{
  Object::DoDispose ();
}
