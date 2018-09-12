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

#include <ns3/core-module.h>
#include "ns3/config-store.h"
#include "AClass"
#include "BClass"
#include "CClass"

using namespace ns3;

int
main (int argc, char *argv[])
{
  Config::SetDefault ("ns3::ConfigStore::Mode", StringValue ("Load");
  Config::SetDefault ("ns3::ConfigStore::FileFormat", StringValue ("RawText"));
  Config::SetDefault ("ns3::ConfigStore::Filename", StringValue ("config-file.txt"));

  ConfigStore config;
  config.ConfigureDefaults ();

  /*
   * Starting report to localized bug in ns3
   */  
  Ptr<AClass> a = CreateObject<AClass> ();
  Ptr<CClass> c = CreateObject<CClass> ();

  return 0;
}
