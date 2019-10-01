﻿// -*- C++ -*-
/*!
 * @file  testFSMFSM.cpp
 * @date $Date$
 * $Id$
 */

#include "testFSMFSM.h"

namespace testFSMFsm {

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

RTC::ReturnCode_t node1::onEntry() {
    std::cout << "node1::onEntry" << std::endl;
    return RTC::RTC_OK;
}
RTC::ReturnCode_t node1::onExit() {
    std::cout << "node1::onExit" << std::endl;
    return RTC::RTC_OK;
}

void node1::event1() {
    setState<node2>();
}

//============================================================
// State node2
// RTC::ReturnCode_t node2::onInit() {
//   return RTC::RTC_OK;
// }

RTC::ReturnCode_t node2::onEntry() {
    std::cout << "node2::onEntry" << std::endl;
  return RTC::RTC_OK;
}
RTC::ReturnCode_t node2::onExit() {
    std::cout << "node2::onExit" << std::endl;
  return RTC::RTC_OK;
}

void node2::event2(RTC::TimedLong) {
  setState<node3>();
}


//============================================================
// State node3
// RTC::ReturnCode_t node3::onInit() {
//   return RTC::RTC_OK;
// }

RTC::ReturnCode_t node3::onEntry() {
    std::cout << "node3::onEntry" << std::endl;
  return RTC::RTC_OK;
}
RTC::ReturnCode_t node3::onExit() {
    std::cout << "node3::onExit" << std::endl;
  return RTC::RTC_OK;
}


} //end namespace 'testFSMFSM'