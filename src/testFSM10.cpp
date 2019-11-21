// -*- C++ -*-
/*!
 * @file  testFSM10.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "testFSM10.h"

// Module specification
// <rtc-template block="module_spec">
static const char* testfsm10_spec[] =
  {
    "implementation_id", "testFSM10",
    "type_name",         "testFSM10",
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
testFSM10::testFSM10(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_fsm(this),
    m_FSMEventIn("event", m_fsm)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
testFSM10::~testFSM10()
{
}



RTC::ReturnCode_t testFSM10::onInitialize()
{
#ifdef ORB_IS_TAO
  ::CORBA_Util::toRepositoryIdOfStruct<TimedLong>();
#endif
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer

  // Set EventPort buffer
  addInPort("event", m_FSMEventIn);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  // <rtc-template block="bind_event">
  m_FSMEventIn.bindEvent("event1", &testFSM10Fsm::Top::event1);
  m_FSMEventIn.bindEvent("event2", &testFSM10Fsm::Top::event2);
  // </rtc-template>

  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testFSM10::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10::onExecute(RTC::UniqueId ec_id)
{
  m_fsm.run_event();
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM10::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void testFSM10Init(RTC::Manager* manager)
  {
    coil::Properties profile(testfsm10_spec);
    manager->registerFactory(profile,
                             RTC::Create<testFSM10>,
                             RTC::Delete<testFSM10>);
  }
  
};


