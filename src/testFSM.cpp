// -*- C++ -*-
/*!
 * @file  testFSM.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "testFSM.h"

// Module specification
// <rtc-template block="module_spec">
static const char* testfsm_spec[] =
  {
    "implementation_id", "testFSM",
    "type_name",         "testFSM",
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
testFSM::testFSM(RTC::Manager* manager)
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
testFSM::~testFSM()
{
}



RTC::ReturnCode_t testFSM::onInitialize()
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
  m_FSMEventIn.bindEvent("event1", &testFSMFsm::Top::event1);
  m_FSMEventIn.bindEvent("event2", &testFSMFsm::Top::event2);
  // </rtc-template>

  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testFSM::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t testFSM::onExecute(RTC::UniqueId ec_id)
{
  m_fsm.run_event();
  return RTC::RTC_OK;
}


/*
RTC::ReturnCode_t testFSM::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testFSM::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void testFSMInit(RTC::Manager* manager)
  {
    coil::Properties profile(testfsm_spec);
    manager->registerFactory(profile,
                             RTC::Create<testFSM>,
                             RTC::Delete<testFSM>);
  }
  
};


