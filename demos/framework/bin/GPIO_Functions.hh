// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R3A
// for  (pi@pi-02) on Sat Apr 21 19:03:51 2018

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef GPIO__Functions_HH
#define GPIO__Functions_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>
#include "GPIO_Definitions.hh"
#include "TEST_API_Functions.hh"

#if TTCN3_VERSION != 60300
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

namespace GPIO__Functions {

/* Function prototypes */

extern void f__GPIO__Device__sendValue(const GPIOPinPort::GPIO__PIN__VALUE& newValue);
extern void start_f__GPIO__Device__sendValue(const COMPONENT& component_reference, const GPIOPinPort::GPIO__PIN__VALUE& newValue);
extern GPIOPinPort::GPIO__PIN__VALUE f__GPIO__Device__receiveValue();
extern void start_f__GPIO__Device__receiveValue(const COMPONENT& component_reference);
extern void f__GPIO__TestDevice__receiveExpectedValue(const GPIOPinPort::GPIO__PIN__VALUE& expectedValue);
extern void start_f__GPIO__TestDevice__receiveExpectedValue(const COMPONENT& component_reference, const GPIOPinPort::GPIO__PIN__VALUE& expectedValue);
extern void f__GPIO__Controller__sendValue(const GPIOPinPort::GPIO__PIN__VALUE& newValue);
extern void start_f__GPIO__Controller__sendValue(const COMPONENT& component_reference, const GPIOPinPort::GPIO__PIN__VALUE& newValue);
extern GPIOPinPort::GPIO__PIN__VALUE f__GPIO__Controller__receiveValue();
extern void start_f__GPIO__Controller__receiveValue(const COMPONENT& component_reference);

/* Global variable declarations */

extern TTCN_Module module_object;

} /* end of namespace */

#endif