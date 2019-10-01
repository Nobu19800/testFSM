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
    return RTC::RTC_OK;
}
RTC::ReturnCode_t node1::onExit() {
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
  return RTC::RTC_OK;
}
RTC::ReturnCode_t node2::onExit() {
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
  return RTC::RTC_OK;
}
RTC::ReturnCode_t node3::onExit() {
  return RTC::RTC_OK;
}


} //end namespace 'testFSMFSM'
