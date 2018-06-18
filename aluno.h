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
 
#ifndef ALUNO_H
#define ALUNO_H

#include <ns3/core-module.h>

using namespace ns3;

class Aluno : public Object
{
public:
  Aluno ();
  static TypeId GetTypeId (void);
  void setNome(std::string nome);
  std::string getNome();
  unsigned int m_idade;

	 
private:
  std::string m_nome;

protected:
  virtual void DoDispose (void);
};	
#endif
