// This C++ source file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R3A
// for  (pi@pi-02) on Sun Apr 22 12:11:47 2018

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

/* Including header files */

#include "GPIO_SendValueTask.hh"

namespace GPIO__SendValueTask {

/* Prototypes of static functions */

static void pre_init_module();
static void post_init_module();
static boolean init_comp_type(const char *component_type, boolean init_base_comps);
static boolean start_ptc_function(const char *function_name, Text_Buf& function_arguments);

/* Literal string constants */

static const CHARSTRING cs_5(4, "HIGH"),
cs_1(9, "INTERFACE"),
cs_6(3, "LOW"),
cs_2(7, "PARAM_1"),
cs_3(17, "Task initialised!"),
cs_4(19, "Task: Value sended!"),
cs_0(4, "send");
static const unsigned char module_checksum[] = { 0x89, 0xdb, 0xc4, 0xb1, 0x86, 0x36, 0xc2, 0x75, 0x89, 0x60, 0x7c, 0x78, 0x50, 0xd6, 0x59, 0x39 };

/* Class definitions for internal use */

class as__GPIO__SendValueTask__TaskBuilder__subscribe_Default : public Default_Base {
public:
as__GPIO__SendValueTask__TaskBuilder__subscribe_Default();
alt_status call_altstep();
};


/* Global variable definitions */

const TTCN_Typedescriptor_t& CT__GPIO__SendValueTask_descr_ = COMPONENT_descr_;
static TASK__BUILDER::RT__TASK__BUILDER__TaskBuilderMission_template template_t__GPIO__ReceiveValueTask__Acceped;
const TASK__BUILDER::RT__TASK__BUILDER__TaskBuilderMission_template& t__GPIO__ReceiveValueTask__Acceped = template_t__GPIO__ReceiveValueTask__Acceped;
static TASK__BUILDER::RT__TASK__BUILDER__TaskBuilderMission_template template_t__GPIO__SendValueTask__ParameterError;
const TASK__BUILDER::RT__TASK__BUILDER__TaskBuilderMission_template& t__GPIO__SendValueTask__ParameterError = template_t__GPIO__SendValueTask__ParameterError;
TTCN_Module module_object("GPIO_SendValueTask", __DATE__, __TIME__, module_checksum, pre_init_module, NULL, 0U, 4294967295U, 4294967295U, 4294967295U, NULL, 0LU, 0, post_init_module, NULL, NULL, NULL, init_comp_type, start_ptc_function, NULL);

static const RuntimeVersionChecker ver_checker(  current_runtime_version.requires_major_version_6,
  current_runtime_version.requires_minor_version_3,
  current_runtime_version.requires_patch_level_0,  current_runtime_version.requires_runtime_1);

/* Member functions of C++ classes */

as__GPIO__SendValueTask__TaskBuilder__subscribe_Default::as__GPIO__SendValueTask__TaskBuilder__subscribe_Default()
 : Default_Base("as_GPIO_SendValueTask_TaskBuilder_subscribe")
{
}

alt_status as__GPIO__SendValueTask__TaskBuilder__subscribe_Default::call_altstep()
{
return as__GPIO__SendValueTask__TaskBuilder__subscribe_instance();
}


/* Bodies of functions, altsteps and testcases */

void f__GPIO__SendValueTask__Task(const COMPONENT& targetDevice, const GPIOPinPort::GPIO__PIN__VALUE& sendValue)
{
TTCN_Location current_location("GPIO_SendValueTask.ttcn", 22, TTCN_Location::LOCATION_FUNCTION, "f_GPIO_SendValueTask_Task");
current_location.update_lineno(24);
/* GPIO_SendValueTask.ttcn, line 24 */
{
tmp_3:
alt_status tmp_3_alt_flag_0 = ALT_MAYBE;
alt_status tmp_3_default_flag = ALT_MAYBE;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (tmp_3_alt_flag_0 == ALT_MAYBE) {
current_location.update_lineno(25);
/* GPIO_SendValueTask.ttcn, line 25 */
tmp_3_alt_flag_0 = TASK::CT__TASK__Task_component_p__taskPort.receive(TASK::ET__TASK__ControlIncomingMessage_template(TASK::ET__TASK__ControlIncomingMessage::EV__TASK__INIT), NULL, any_compref, NULL, NULL);
if (tmp_3_alt_flag_0 == ALT_YES) {
current_location.update_lineno(26);
/* GPIO_SendValueTask.ttcn, line 26 */
TTCN_Runtime::connect_port(self, GPIO__Definitions::CT__GPIO__Controller_component_device.get_name(), targetDevice, GPIO__Definitions::CT__GPIO__Device_component_controller.get_name());
current_location.update_lineno(27);
/* GPIO_SendValueTask.ttcn, line 27 */
GPIO__Definitions::CT__GPIO__Controller_component_device.send(GPIOPinPort::GPIO__PIN__DIRECTION(GPIOPinPort::GPIO__PIN__DIRECTION::OUT));
current_location.update_lineno(28);
/* GPIO_SendValueTask.ttcn, line 28 */
TEST__API__Functions::f__TEST__API__Subject__setverdict(PASS, cs_3);
current_location.update_lineno(29);
/* GPIO_SendValueTask.ttcn, line 29 */
TASK::CT__TASK__Task_component_p__taskPort.send(TASK::ET__TASK__ControlOutcomingMessage(TASK::ET__TASK__ControlOutcomingMessage::EV__TASK__INITIALISED));
break;
}
}
if (tmp_3_default_flag == ALT_MAYBE) {
tmp_3_default_flag = TTCN_Default::try_altsteps();
if (tmp_3_default_flag == ALT_YES || tmp_3_default_flag == ALT_BREAK) break;
else if (tmp_3_default_flag == ALT_REPEAT) goto tmp_3;
}
current_location.update_lineno(24);
/* GPIO_SendValueTask.ttcn, line 24 */
if (tmp_3_alt_flag_0 == ALT_NO && tmp_3_default_flag == ALT_NO) TTCN_error("None of the branches can be chosen in the alt statement in file GPIO_SendValueTask.ttcn between lines 24 and 31.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(33);
/* GPIO_SendValueTask.ttcn, line 33 */
{
tmp_4:
alt_status tmp_4_alt_flag_0 = ALT_MAYBE;
alt_status tmp_4_default_flag = ALT_MAYBE;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (tmp_4_alt_flag_0 == ALT_MAYBE) {
current_location.update_lineno(34);
/* GPIO_SendValueTask.ttcn, line 34 */
tmp_4_alt_flag_0 = TASK::CT__TASK__Task_component_p__taskPort.receive(TASK::ET__TASK__ControlIncomingMessage_template(TASK::ET__TASK__ControlIncomingMessage::EV__TASK__START), NULL, any_compref, NULL, NULL);
if (tmp_4_alt_flag_0 == ALT_YES) {
current_location.update_lineno(36);
/* GPIO_SendValueTask.ttcn, line 36 */
GPIO__Functions::f__GPIO__Controller__sendValue(sendValue);
current_location.update_lineno(37);
/* GPIO_SendValueTask.ttcn, line 37 */
TEST__API__Functions::f__TEST__API__Subject__setverdict(PASS, cs_4);
current_location.update_lineno(38);
/* GPIO_SendValueTask.ttcn, line 38 */
TASK::CT__TASK__Task_component_p__taskPort.send(TASK::ET__TASK__ControlOutcomingMessage(TASK::ET__TASK__ControlOutcomingMessage::EV__TASK__FINISH));
break;
}
}
if (tmp_4_default_flag == ALT_MAYBE) {
tmp_4_default_flag = TTCN_Default::try_altsteps();
if (tmp_4_default_flag == ALT_YES || tmp_4_default_flag == ALT_BREAK) break;
else if (tmp_4_default_flag == ALT_REPEAT) goto tmp_4;
}
current_location.update_lineno(33);
/* GPIO_SendValueTask.ttcn, line 33 */
if (tmp_4_alt_flag_0 == ALT_NO && tmp_4_default_flag == ALT_NO) TTCN_error("None of the branches can be chosen in the alt statement in file GPIO_SendValueTask.ttcn between lines 33 and 40.");
TTCN_Snapshot::take_new(TRUE);
}
}
}

void start_f__GPIO__SendValueTask__Task(const COMPONENT& component_reference, const COMPONENT& targetDevice, const GPIOPinPort::GPIO__PIN__VALUE& sendValue)
{
TTCN_Logger::begin_event(TTCN_Logger::PARALLEL_PTC);
TTCN_Logger::log_event_str("Starting function f_GPIO_SendValueTask_Task(");
targetDevice.log();
TTCN_Logger::log_event_str(", ");
sendValue.log();
TTCN_Logger::log_event_str(") on component ");
component_reference.log();
TTCN_Logger::log_char('.');
TTCN_Logger::end_event();
Text_Buf text_buf;
TTCN_Runtime::prepare_start_component(component_reference, "GPIO_SendValueTask", "f_GPIO_SendValueTask_Task", text_buf);
targetDevice.encode_text(text_buf);
sendValue.encode_text(text_buf);
TTCN_Runtime::send_start_component(text_buf);
}

alt_status as__GPIO__SendValueTask__TaskBuilder__subscribe_instance()
{
TTCN_Location current_location("GPIO_SendValueTask.ttcn", 43, TTCN_Location::LOCATION_ALTSTEP, "as_GPIO_SendValueTask_TaskBuilder_subscribe");
current_location.update_lineno(45);
/* GPIO_SendValueTask.ttcn, line 45 */
TASK__BUILDER::RT__TASK__BUILDER__TaskBuilderMission receivedMission;
alt_status ret_val = ALT_NO;
current_location.update_lineno(46);
/* GPIO_SendValueTask.ttcn, line 46 */
switch (TASK__BUILDER::CT__TASK__BUILDER__TaskBuilder_component_p__taskBuilderPort.receive(t__GPIO__ReceiveValueTask__Acceped, &(receivedMission), any_compref, NULL, NULL)) {
case ALT_YES:
{
current_location.update_lineno(48);
/* GPIO_SendValueTask.ttcn, line 48 */
CHARSTRING v__interface(TASK__BUILDER::f__TaskBuilderParameters__getValueOf(const_cast< const TASK__BUILDER::RT__TASK__BUILDER__TaskBuilderMission&>(receivedMission).Parameters(), cs_1));
current_location.update_lineno(49);
/* GPIO_SendValueTask.ttcn, line 49 */
CHARSTRING v__value(TASK__BUILDER::f__TaskBuilderParameters__getValueOf(const_cast< const TASK__BUILDER::RT__TASK__BUILDER__TaskBuilderMission&>(receivedMission).Parameters(), cs_2));
current_location.update_lineno(52);
/* GPIO_SendValueTask.ttcn, line 52 */
INTERFACE__STORE::RT__INTERFACE__STORE__InterfaceElement receivedElement;
current_location.update_lineno(53);
/* GPIO_SendValueTask.ttcn, line 53 */
{
INTERFACE__STORE::RT__INTERFACE__STORE__InterfaceElement_template tmp_5;
tmp_5.Name() = v__interface;
tmp_5.Device() = OMIT_VALUE;
tmp_5.Controller() = OMIT_VALUE;
TASK__BUILDER::CT__TASK__BUILDER__TaskBuilder_component_p__interfaceStore.send(tmp_5);
}
current_location.update_lineno(54);
/* GPIO_SendValueTask.ttcn, line 54 */
{
tmp_6:
INTERFACE__STORE::RT__INTERFACE__STORE__InterfaceElement_template tmp_7;
tmp_7.Name() = v__interface;
tmp_7.Device() = ANY_VALUE;
tmp_7.Controller() = OMIT_VALUE;
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = TASK__BUILDER::CT__TASK__BUILDER__TaskBuilder_component_p__interfaceStore.receive(tmp_7, &(receivedElement), any_compref, NULL, NULL);
if (alt_flag == ALT_YES) break;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_6;
}
current_location.update_lineno(54);
/* GPIO_SendValueTask.ttcn, line 54 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone receive statement failed in file GPIO_SendValueTask.ttcn, line 54.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(57);
/* GPIO_SendValueTask.ttcn, line 57 */
COMPONENT newTask(TTCN_Runtime::create_component("GPIO_SendValueTask", "CT_GPIO_SendValueTask", NULL, NULL, FALSE));
current_location.update_lineno(58);
/* GPIO_SendValueTask.ttcn, line 58 */
if ((v__value == cs_5)) {
current_location.update_lineno(59);
/* GPIO_SendValueTask.ttcn, line 59 */
start_f__GPIO__SendValueTask__Task(newTask, const_cast< const INTERFACE__STORE::RT__INTERFACE__STORE__InterfaceElement&>(receivedElement).Device()().UV__GPIO(), GPIOPinPort::GPIO__PIN__VALUE::HIGH);
}
else {
current_location.update_lineno(60);
/* GPIO_SendValueTask.ttcn, line 60 */
if ((v__value == cs_6)) {
current_location.update_lineno(61);
/* GPIO_SendValueTask.ttcn, line 61 */
start_f__GPIO__SendValueTask__Task(newTask, const_cast< const INTERFACE__STORE::RT__INTERFACE__STORE__InterfaceElement&>(receivedElement).Device()().UV__GPIO(), GPIOPinPort::GPIO__PIN__VALUE::LOW);
}
else {
}
}
current_location.update_lineno(66);
/* GPIO_SendValueTask.ttcn, line 66 */
receivedMission.CreatedTask() = newTask;
current_location.update_lineno(67);
/* GPIO_SendValueTask.ttcn, line 67 */
TASK__BUILDER::CT__TASK__BUILDER__TaskBuilder_component_p__taskBuilderPort.send(receivedMission);
current_location.update_lineno(68);
/* GPIO_SendValueTask.ttcn, line 68 */
return ALT_REPEAT;
}
case ALT_MAYBE:
ret_val = ALT_MAYBE;
default:
break;
}
current_location.update_lineno(70);
/* GPIO_SendValueTask.ttcn, line 70 */
switch (TASK__BUILDER::CT__TASK__BUILDER__TaskBuilder_component_p__taskBuilderPort.receive(t__GPIO__SendValueTask__ParameterError, &(receivedMission), any_compref, NULL, NULL)) {
case ALT_YES:
return ALT_YES;
case ALT_MAYBE:
ret_val = ALT_MAYBE;
default:
break;
}
return ret_val;
}

void as__GPIO__SendValueTask__TaskBuilder__subscribe()
{
altstep_begin:
boolean block_flag = FALSE;
alt_status altstep_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
for ( ; ; ) {
TTCN_Snapshot::take_new(block_flag);
if (altstep_flag != ALT_NO) {
altstep_flag = as__GPIO__SendValueTask__TaskBuilder__subscribe_instance();
if (altstep_flag == ALT_YES || altstep_flag == ALT_BREAK) return;
else if (altstep_flag == ALT_REPEAT) goto altstep_begin;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) return;
else if (default_flag == ALT_REPEAT) goto altstep_begin;
}
if (altstep_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("None of the branches can be chosen in altstep as_GPIO_SendValueTask_TaskBuilder_subscribe.");
else block_flag = TRUE;
}
}

Default_Base *activate_as__GPIO__SendValueTask__TaskBuilder__subscribe()
{
return new as__GPIO__SendValueTask__TaskBuilder__subscribe_Default();
}


/* Bodies of static functions */

static void pre_init_module()
{
TTCN_Location current_location("GPIO_SendValueTask.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "GPIO_SendValueTask");
GPIOPinPort::module_object.pre_init_module();
TASK__BUILDER::module_object.pre_init_module();
GPIO::module_object.pre_init_module();
INTERFACE__STORE::module_object.pre_init_module();
module_object.add_function("f_GPIO_SendValueTask_Task", (genericfunc_t)&f__GPIO__SendValueTask__Task, (genericfunc_t)&start_f__GPIO__SendValueTask__Task);
module_object.add_altstep("as_GPIO_SendValueTask_TaskBuilder_subscribe", (genericfunc_t)&as__GPIO__SendValueTask__TaskBuilder__subscribe_instance, (genericfunc_t )&activate_as__GPIO__SendValueTask__TaskBuilder__subscribe, (genericfunc_t )&as__GPIO__SendValueTask__TaskBuilder__subscribe);
}

static void post_init_module()
{
TTCN_Location current_location("GPIO_SendValueTask.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "GPIO_SendValueTask");
GPIOPinPort::module_object.post_init_module();
TASK__BUILDER::module_object.post_init_module();
GPIO::module_object.post_init_module();
INTERFACE__STORE::module_object.post_init_module();
current_location.update_lineno(12);
/* GPIO_SendValueTask.ttcn, line 12 */
template_t__GPIO__ReceiveValueTask__Acceped.TaskName() = cs_0;
{
TASK__BUILDER::RT__TASK__BUILDER__TaskBuilderParameters_template& tmp_0 = template_t__GPIO__ReceiveValueTask__Acceped.Parameters();
tmp_0.set_size(2);
{
TASK__BUILDER::RT__TASK__BUILDER__TaskBuilderParameter_template& tmp_1 = tmp_0[0];
tmp_1.Name() = cs_1;
tmp_1.Value() = ANY_VALUE;
}
{
TASK__BUILDER::RT__TASK__BUILDER__TaskBuilderParameter_template& tmp_2 = tmp_0[1];
tmp_2.Name() = cs_2;
tmp_2.Value() = ANY_VALUE;
}
}
template_t__GPIO__ReceiveValueTask__Acceped.CreatedTask() = OMIT_VALUE;
current_location.update_lineno(19);
/* GPIO_SendValueTask.ttcn, line 19 */
template_t__GPIO__SendValueTask__ParameterError.TaskName() = cs_0;
template_t__GPIO__SendValueTask__ParameterError.Parameters() = ANY_VALUE;
template_t__GPIO__SendValueTask__ParameterError.CreatedTask() = OMIT_VALUE;
}

static boolean init_comp_type(const char *component_type, boolean init_base_comps)
{
(void)init_base_comps;
if (!strcmp(component_type, "CT_GPIO_SendValueTask")) {
if (init_base_comps) {
Module_List::initialize_component("GPIO_Definitions", "CT_GPIO_Controller", FALSE);
Module_List::initialize_component("TASK", "CT_TASK_Task", FALSE);
Module_List::initialize_component("TEST_Definitions", "CT_TEST_Subject", FALSE);
}
return TRUE;
} else return FALSE;
}

static boolean start_ptc_function(const char *function_name, Text_Buf& function_arguments)
{
if (!strcmp(function_name, "f_GPIO_SendValueTask_Task")) {
COMPONENT targetDevice;
GPIOPinPort::GPIO__PIN__VALUE sendValue;
targetDevice.decode_text(function_arguments);
sendValue.decode_text(function_arguments);
TTCN_Logger::begin_event(TTCN_Logger::PARALLEL_PTC);
TTCN_Logger::log_event_str("Starting function f_GPIO_SendValueTask_Task(");
targetDevice.log();
TTCN_Logger::log_event_str(", ");
sendValue.log();
TTCN_Logger::log_event_str(").");
TTCN_Logger::end_event();
TTCN_Runtime::function_started(function_arguments);
f__GPIO__SendValueTask__Task(targetDevice, sendValue);
TTCN_Runtime::function_finished("f_GPIO_SendValueTask_Task");
return TRUE;
} else return FALSE;
}


} /* end of namespace */