# testFSM10

## Overview

ModuleDescription

## Description



### Input and Output



### Algorithm etc



### Basic Information

|  |  |
----|---- 
| Module Name | testFSM10 |
| Description | ModuleDescription |
| Version | 1.0.0 |
| Vendor | VenderName |
| Category | Category |
| Comp. Type | STATIC |
| Act. Type | PERIODIC |
| Kind | DataFlowComponent |
| MAX Inst. | 1 |

### Activity definition

<table>
  <tr>
    <td rowspan="4">on_initialize</td>
    <td colspan="2">implemented</td>
    <tr>
      <td>Description</td>
      <td></td>
    </tr>
    <tr>
      <td>PreCondition</td>
      <td></td>
    </tr>
    <tr>
      <td>PostCondition</td>
      <td></td>
    </tr>
  </tr>
  <tr>
    <td>on_finalize</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>on_startup</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>on_shutdown</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>on_activated</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>on_deactivated</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>on_execute</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>on_aborting</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>on_error</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>on_reset</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>on_state_update</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>on_rate_changed</td>
    <td colspan="2"></td>
  </tr>
</table>

### EventPorts definition

|  |  |
----|---- 
| Port Name | m_FSMEventIn |
| FSM Type | StaticFSM |

#### Node list

<table>
  <tr>
    <td>State Name</td>
    <td>Event Name</td>
    <td>Target State</td>
  </tr>
  <tr>
    <td>node0</td>
    <td colspan="2">Initial State</td>
  </tr>
  <tr>
    <td rowspan="2">node1</td>
    <td>event1</td>
    <td>node2</td>
  </tr>
  <tr>
    <td>event2</td>
    <td>node3</td>
  </tr>
  <tr>
    <td rowspan="1">node2</td>
    <td></td>
    <td>node3</td>
  </tr>
  <tr>
    <td>node3</td>
    <td colspan="2">Final State</td>
  </tr>

</table>

#### Event list

##### event1

概要1

<table>
  <tr>
    <td>Source State</td>
    <td colspan="2">node1</td>
  </tr>
  <tr>
    <td>Target State</td>
    <td colspan="2">node2</td>
  </tr>
  <tr>
    <td>DataType</td>
    <td>RTC::TimedShort data</td>
    <td>データ型1</td>
  </tr>
  <tr>
    <td>Number of Data</td>
    <td colspan="2">データ数1</td>
  </tr>
  <tr>
    <td>Unit</td>
    <td colspan="2">単位1</td>
  </tr>
  <tr>
    <td>Operational frecency Period</td>
    <td colspan="2">処理頻度1</td>
  </tr>
</table>

説明1

##### event2



<table>
  <tr>
    <td>Source State</td>
    <td colspan="2">node1</td>
  </tr>
  <tr>
    <td>Target State</td>
    <td colspan="2">node3</td>
  </tr>
  <tr>
    <td>DataType</td>
    <td></td>
    <td></td>
  </tr>
  <tr>
    <td>Number of Data</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>Unit</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>Operational frecency Period</td>
    <td colspan="2"></td>
  </tr>
</table>



##### 



<table>
  <tr>
    <td>Source State</td>
    <td colspan="2">node2</td>
  </tr>
  <tr>
    <td>Target State</td>
    <td colspan="2">node3</td>
  </tr>
  <tr>
    <td>DataType</td>
    <td></td>
    <td></td>
  </tr>
  <tr>
    <td>Number of Data</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>Unit</td>
    <td colspan="2"></td>
  </tr>
  <tr>
    <td>Operational frecency Period</td>
    <td colspan="2"></td>
  </tr>
</table>





### InPorts definition


### OutPorts definition


### Service Port definition


### Configuration definition


## Demo

## Requirement

## Setup

### Windows

### Ubuntu

## Usage

## Running the tests

## LICENCE




## References




## Author


