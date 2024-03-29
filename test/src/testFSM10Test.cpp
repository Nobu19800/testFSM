﻿// -*- C++ -*-
/*!
 * @file  testFSM10Test.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "testFSM10Test.h"

// Module specification
// <rtc-template block="module_spec">
static const char* testfsm10_spec[] =
  {
    "implementation_id", "testFSM10Test",
    "type_name",         "testFSM10Test",
    "description",       "ModuleDescription",
    "version",           "1.0.0",
    "vendor",            "VenderName",
    "category",          "Category",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
testFSM10Test::testFSM10Test(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_inOut("in", m_in)
,
    m_event1Out("event1", m_event1),
    m_event2Out("event2", m_event2)
    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
testFSM10Test::~testFSM10Test()
{
}



RTC::ReturnCode_t testFSM10Test::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  addOutPort("in", m_inOut);
  addOutPort("event1", m_event1Out);
  addOutPort("event2", m_event2Out);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testFSM10Test::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10Test::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10Test::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10Test::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10Test::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10Test::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10Test::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10Test::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10Test::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10Test::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10Test::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


bool testFSM10Test::runTest()
{
    return true;
}


extern "C"
{
 
  void testFSM10TestInit(RTC::Manager* manager)
  {
    coil::Properties profile(testfsm10_spec);
    manager->registerFactory(profile,
                             RTC::Create<testFSM10Test>,
                             RTC::Delete<testFSM10Test>);
  }
  
};


