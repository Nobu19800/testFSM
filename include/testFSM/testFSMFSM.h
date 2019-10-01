﻿// -*- C++ -*-
/*!
 * @file  testFSMFSM.h
 * @date  $Date$
 * $Id$
 */

#ifndef TESTFSMFSM_H
#define TESTFSMFSM_H

#include <rtm/StaticFSM.h>
#include <rtm/idl/BasicDataTypeSkel.h>
#include <rtm/RTC.h>

class testFSM;

namespace testFSMFsm {

  /*!
   * @if jp
   * @class TOP状態
   *
   *
   * @else
   * @brief TOP state
   *
   * @endif
   */
  FSM_TOPSTATE(Top) {
    // Top state variables (visible to all substates)
  
    FSM_STATE(Top);

    // Machine's event protocol
    /*!
     */
    virtual void event1() {}
    
    /*!
     */
    virtual void event2(RTC::TimedLong) {}
    
  
   private:
     RTC::ReturnCode_t onInit() override;
     RTC::ReturnCode_t onEntry() override;
     RTC::ReturnCode_t onExit() override;
  };

  FSM_SUBSTATE(node1, Top) {
      FSM_STATE(node1);


      // Event handler
      void event1() override;

private:
    // RTC::ReturnCode_t onInit() override;
    RTC::ReturnCode_t onEntry() override;
    RTC::ReturnCode_t onExit() override;
  };

  FSM_SUBSTATE(node2, Top) {
    FSM_STATE(node2);
  

    // Event handler
    void event2(RTC::TimedLong) override;

    private:
      // RTC::ReturnCode_t onInit() override;
       RTC::ReturnCode_t onEntry() override;
       RTC::ReturnCode_t onExit() override;
  };

  FSM_SUBSTATE(node3, Top) {
    FSM_STATE(node3);
  

    // Event handler

    private:
      // RTC::ReturnCode_t onInit() override;
       RTC::ReturnCode_t onEntry() override;
       RTC::ReturnCode_t onExit() override;
  };


} //end namespace 'testFSMFSM'

#endif // TESTFSMFSM_H
