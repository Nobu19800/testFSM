// -*- C++ -*-
/*!
 * @file  ModuleNameFSM.cpp
 * @date $Date$
 * $Id$
 */

#include "ModuleNameFSM.h"

namespace ModuleNameFsm {

// Top state
RTC::ReturnCode_t Top::onInit() {
  setState<node1>();
  return RTC::RTC_OK;
}

RTC::ReturnCode_t Top::onEntry() {
  return RTC::RTC_OK;
}

RTC::ReturnCode_t Top::onExit() {
  return RTC::RTC_OK;
}

//============================================================
// State node1
// RTC::ReturnCode_t node1::onInit() {
//   return RTC::RTC_OK;
// }


void node1::event1(RTC::TimedShort data) {
  setState<node2>();
}

void node1::event2() {
  setState<node3>();
}


//============================================================
// State node2
// RTC::ReturnCode_t node2::onInit() {
//   return RTC::RTC_OK;
// }



} //end namespace 'ModuleNameFSM'
