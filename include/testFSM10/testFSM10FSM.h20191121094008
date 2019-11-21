// -*- C++ -*-
/*!
 * @file  testFSM10FSM.h
 * @date  $Date$
 * $Id$
 */

#ifndef TESTFSM10FSM_H
#define TESTFSM10FSM_H

#include <rtm/StaticFSM.h>
#include <rtm/idl/BasicDataTypeSkel.h>
#include <rtm/RTC.h>

class testFSM10;

namespace testFSM10Fsm {

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
     * 概要1
     * - Type: データ型1
     * - Number: データ数1
     * - Semantics: 説明1
     * - Unit: 単位1
     * - Operation Cycle: 処理頻度1
     */
    virtual void event1(RTC::TimedShort data) {}
    
    /*!
     */
    virtual void event2() {}
    
  
   private:
     RTC::ReturnCode_t onInit() override;
     RTC::ReturnCode_t onEntry() override;
     RTC::ReturnCode_t onExit() override;
  };

  FSM_SUBSTATE(node1, Top) {
    FSM_STATE(node1);
  

    // Event handler
    void event1(RTC::TimedShort data) override;
    void event2() override;

    private:
      // RTC::ReturnCode_t onInit() override;
  };

  FSM_SUBSTATE(node2, Top) {
    FSM_STATE(node2);
  

    // Event handler

    private:
      // RTC::ReturnCode_t onInit() override;
  };


} //end namespace 'testFSM10FSM'

#endif // TESTFSM10FSM_H
