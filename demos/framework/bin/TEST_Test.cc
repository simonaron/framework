// This C++ source file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R3A
// for  (pi@pi-02) on Sat Apr 21 19:03:51 2018

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

/* Including header files */

#include "TEST_Test.hh"

namespace TEST__Test {

/* Prototypes of static functions */

static void pre_init_module();
static void post_init_module();
static void module_control_part();

/* Literal string constants */

static const CHARSTRING cs_2(36, "( inconc )  Receive verdict timeout."),
cs_1(6, "NOT OK"),
cs_0(2, "OK");
static const unsigned char module_checksum[] = { 0x57, 0x3b, 0xf4, 0x3f, 0x20, 0x5b, 0xc7, 0x6c, 0x44, 0x82, 0x93, 0x8b, 0xf0, 0x32, 0x72, 0x1a };

/* Global variable definitions */

TTCN_Module module_object("TEST_Test", __DATE__, __TIME__, module_checksum, pre_init_module, NULL, 0U, 4294967295U, 4294967295U, 4294967295U, NULL, 0LU, 0, post_init_module, NULL, NULL, NULL, NULL, NULL, module_control_part);

static const RuntimeVersionChecker ver_checker(  current_runtime_version.requires_major_version_6,
  current_runtime_version.requires_minor_version_3,
  current_runtime_version.requires_patch_level_0,  current_runtime_version.requires_runtime_1);

/* Bodies of functions, altsteps and testcases */

verdicttype testcase_tc__TEST__UnitTest____Subject____expexted__pass____receive__pass(boolean has_timer, double timer_value)
{
TTCN_Runtime::check_begin_testcase(has_timer, timer_value);
TTCN_Location current_location("TEST_Test.ttcn", 8, TTCN_Location::LOCATION_TESTCASE, "tc_TEST_UnitTest__Subject__expexted_pass__receive_pass");
try {
TTCN_Runtime::begin_testcase("TEST_Test", "tc_TEST_UnitTest__Subject__expexted_pass__receive_pass", "TEST_Definitions", "CT_TEST_Watcher", "TEST_Definitions", "CT_TEST_Watcher", has_timer, timer_value);
current_location.update_lineno(9);
/* TEST_Test.ttcn, line 9 */
TEST__API__Functions::f__TEST__API__UnitTest__Start();
current_location.update_lineno(11);
/* TEST_Test.ttcn, line 11 */
COMPONENT ct__subject(TTCN_Runtime::create_component("TEST_Definitions", "CT_TEST_Subject", NULL, NULL, TRUE));
current_location.update_lineno(12);
/* TEST_Test.ttcn, line 12 */
TEST__API__Functions::f__TEST__API__Watcher__watch(ct__subject);
current_location.update_lineno(14);
/* TEST_Test.ttcn, line 14 */
TEST__Functions::start_f__TEST__Subject__setverdict(ct__subject, PASS, cs_0);
current_location.update_lineno(15);
/* TEST_Test.ttcn, line 15 */
{
tmp_0:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__subject.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_0;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_0;
}
current_location.update_lineno(15);
/* TEST_Test.ttcn, line 15 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 15.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(16);
/* TEST_Test.ttcn, line 16 */
TEST__API__Functions::f__TEST__API__Watcher__getverdict(PASS, cs_0, TEST__API__Functions::f__TEST__API__Watcher__getverdict_new__timeout_defval);
current_location.update_lineno(18);
/* TEST_Test.ttcn, line 18 */
TEST__API__Functions::f__TEST__API__UnitTest__Finished();
} catch (const TC_Error& tc_error) {
} catch (const TC_End& tc_end) {
TTCN_Logger::log_str(TTCN_FUNCTION, "Test case tc_TEST_UnitTest__Subject__expexted_pass__receive_pass was stopped.");
}
return TTCN_Runtime::end_testcase();
}

verdicttype testcase_tc__TEST__UnitTest____Subject____expexted__inconc____receive__inconc(boolean has_timer, double timer_value)
{
TTCN_Runtime::check_begin_testcase(has_timer, timer_value);
TTCN_Location current_location("TEST_Test.ttcn", 21, TTCN_Location::LOCATION_TESTCASE, "tc_TEST_UnitTest__Subject__expexted_inconc__receive_inconc");
try {
TTCN_Runtime::begin_testcase("TEST_Test", "tc_TEST_UnitTest__Subject__expexted_inconc__receive_inconc", "TEST_Definitions", "CT_TEST_Watcher", "TEST_Definitions", "CT_TEST_Watcher", has_timer, timer_value);
current_location.update_lineno(22);
/* TEST_Test.ttcn, line 22 */
TEST__API__Functions::f__TEST__API__UnitTest__Start();
current_location.update_lineno(24);
/* TEST_Test.ttcn, line 24 */
COMPONENT ct__subject(TTCN_Runtime::create_component("TEST_Definitions", "CT_TEST_Subject", NULL, NULL, TRUE));
current_location.update_lineno(25);
/* TEST_Test.ttcn, line 25 */
TEST__API__Functions::f__TEST__API__Watcher__watch(ct__subject);
current_location.update_lineno(27);
/* TEST_Test.ttcn, line 27 */
TEST__Functions::start_f__TEST__Subject__setverdict(ct__subject, INCONC, cs_0);
current_location.update_lineno(28);
/* TEST_Test.ttcn, line 28 */
{
tmp_1:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__subject.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_1;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_1;
}
current_location.update_lineno(28);
/* TEST_Test.ttcn, line 28 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 28.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(29);
/* TEST_Test.ttcn, line 29 */
TEST__API__Functions::f__TEST__API__Watcher__getverdict(INCONC, cs_0, TEST__API__Functions::f__TEST__API__Watcher__getverdict_new__timeout_defval);
current_location.update_lineno(31);
/* TEST_Test.ttcn, line 31 */
TEST__API__Functions::f__TEST__API__UnitTest__Finished();
} catch (const TC_Error& tc_error) {
} catch (const TC_End& tc_end) {
TTCN_Logger::log_str(TTCN_FUNCTION, "Test case tc_TEST_UnitTest__Subject__expexted_inconc__receive_inconc was stopped.");
}
return TTCN_Runtime::end_testcase();
}

verdicttype testcase_tc__TEST__UnitTest____Subject____expexted__fail____receive__fail(boolean has_timer, double timer_value)
{
TTCN_Runtime::check_begin_testcase(has_timer, timer_value);
TTCN_Location current_location("TEST_Test.ttcn", 34, TTCN_Location::LOCATION_TESTCASE, "tc_TEST_UnitTest__Subject__expexted_fail__receive_fail");
try {
TTCN_Runtime::begin_testcase("TEST_Test", "tc_TEST_UnitTest__Subject__expexted_fail__receive_fail", "TEST_Definitions", "CT_TEST_Watcher", "TEST_Definitions", "CT_TEST_Watcher", has_timer, timer_value);
current_location.update_lineno(35);
/* TEST_Test.ttcn, line 35 */
TEST__API__Functions::f__TEST__API__UnitTest__Start();
current_location.update_lineno(37);
/* TEST_Test.ttcn, line 37 */
COMPONENT ct__subject(TTCN_Runtime::create_component("TEST_Definitions", "CT_TEST_Subject", NULL, NULL, TRUE));
current_location.update_lineno(38);
/* TEST_Test.ttcn, line 38 */
TEST__API__Functions::f__TEST__API__Watcher__watch(ct__subject);
current_location.update_lineno(40);
/* TEST_Test.ttcn, line 40 */
TEST__Functions::start_f__TEST__Subject__setverdict(ct__subject, FAIL, cs_1);
current_location.update_lineno(41);
/* TEST_Test.ttcn, line 41 */
{
tmp_2:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__subject.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_2;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_2;
}
current_location.update_lineno(41);
/* TEST_Test.ttcn, line 41 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 41.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(42);
/* TEST_Test.ttcn, line 42 */
TEST__API__Functions::f__TEST__API__Watcher__getverdict(FAIL, cs_1, TEST__API__Functions::f__TEST__API__Watcher__getverdict_new__timeout_defval);
current_location.update_lineno(44);
/* TEST_Test.ttcn, line 44 */
TEST__API__Functions::f__TEST__API__UnitTest__Finished();
} catch (const TC_Error& tc_error) {
} catch (const TC_End& tc_end) {
TTCN_Logger::log_str(TTCN_FUNCTION, "Test case tc_TEST_UnitTest__Subject__expexted_fail__receive_fail was stopped.");
}
return TTCN_Runtime::end_testcase();
}

verdicttype testcase_tc__TEST__UnitTest____Subject____receive__more__expected(boolean has_timer, double timer_value)
{
TTCN_Runtime::check_begin_testcase(has_timer, timer_value);
TTCN_Location current_location("TEST_Test.ttcn", 47, TTCN_Location::LOCATION_TESTCASE, "tc_TEST_UnitTest__Subject__receive_more_expected");
try {
TTCN_Runtime::begin_testcase("TEST_Test", "tc_TEST_UnitTest__Subject__receive_more_expected", "TEST_Definitions", "CT_TEST_Watcher", "TEST_Definitions", "CT_TEST_Watcher", has_timer, timer_value);
current_location.update_lineno(48);
/* TEST_Test.ttcn, line 48 */
TEST__API__Functions::f__TEST__API__UnitTest__Start();
current_location.update_lineno(50);
/* TEST_Test.ttcn, line 50 */
COMPONENT ct__subject(TTCN_Runtime::create_component("TEST_Definitions", "CT_TEST_Subject", NULL, NULL, TRUE));
current_location.update_lineno(51);
/* TEST_Test.ttcn, line 51 */
TEST__API__Functions::f__TEST__API__Watcher__watch(ct__subject);
current_location.update_lineno(53);
/* TEST_Test.ttcn, line 53 */
TEST__Functions::start_f__TEST__Subject__setverdict(ct__subject, FAIL, cs_1);
current_location.update_lineno(54);
/* TEST_Test.ttcn, line 54 */
{
tmp_3:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__subject.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_3;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_3;
}
current_location.update_lineno(54);
/* TEST_Test.ttcn, line 54 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 54.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(55);
/* TEST_Test.ttcn, line 55 */
TEST__API__Functions::f__TEST__API__Watcher__getverdict(FAIL, cs_1, TEST__API__Functions::f__TEST__API__Watcher__getverdict_new__timeout_defval);
current_location.update_lineno(57);
/* TEST_Test.ttcn, line 57 */
TEST__Functions::start_f__TEST__Subject__setverdict(ct__subject, INCONC, cs_0);
current_location.update_lineno(58);
/* TEST_Test.ttcn, line 58 */
{
tmp_4:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__subject.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_4;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_4;
}
current_location.update_lineno(58);
/* TEST_Test.ttcn, line 58 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 58.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(59);
/* TEST_Test.ttcn, line 59 */
TEST__API__Functions::f__TEST__API__Watcher__getverdict(INCONC, cs_0, TEST__API__Functions::f__TEST__API__Watcher__getverdict_new__timeout_defval);
current_location.update_lineno(61);
/* TEST_Test.ttcn, line 61 */
TEST__Functions::start_f__TEST__Subject__setverdict(ct__subject, FAIL, cs_1);
current_location.update_lineno(62);
/* TEST_Test.ttcn, line 62 */
{
tmp_5:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__subject.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_5;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_5;
}
current_location.update_lineno(62);
/* TEST_Test.ttcn, line 62 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 62.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(63);
/* TEST_Test.ttcn, line 63 */
TEST__API__Functions::f__TEST__API__Watcher__getverdict(FAIL, cs_1, TEST__API__Functions::f__TEST__API__Watcher__getverdict_new__timeout_defval);
current_location.update_lineno(65);
/* TEST_Test.ttcn, line 65 */
TEST__API__Functions::f__TEST__API__UnitTest__Finished();
} catch (const TC_Error& tc_error) {
} catch (const TC_End& tc_end) {
TTCN_Logger::log_str(TTCN_FUNCTION, "Test case tc_TEST_UnitTest__Subject__receive_more_expected was stopped.");
}
return TTCN_Runtime::end_testcase();
}

verdicttype testcase_tc__TEST__UnitTest____Watcher____not__expected__receive(boolean has_timer, double timer_value)
{
TTCN_Runtime::check_begin_testcase(has_timer, timer_value);
TTCN_Location current_location("TEST_Test.ttcn", 68, TTCN_Location::LOCATION_TESTCASE, "tc_TEST_UnitTest__Watcher__not_expected_receive");
try {
TTCN_Runtime::begin_testcase("TEST_Test", "tc_TEST_UnitTest__Watcher__not_expected_receive", "TEST_Definitions", "CT_TEST_Watcher", "TEST_Definitions", "CT_TEST_Watcher", has_timer, timer_value);
current_location.update_lineno(69);
/* TEST_Test.ttcn, line 69 */
TEST__API__Functions::f__TEST__API__UnitTest__Start();
current_location.update_lineno(71);
/* TEST_Test.ttcn, line 71 */
COMPONENT ct__watcher(TTCN_Runtime::create_component("TEST_Definitions", "CT_TEST_Watcher", NULL, NULL, TRUE));
current_location.update_lineno(72);
/* TEST_Test.ttcn, line 72 */
TEST__API__Functions::f__TEST__API__Watcher__watch(ct__watcher);
current_location.update_lineno(74);
/* TEST_Test.ttcn, line 74 */
COMPONENT ct__subject(TTCN_Runtime::create_component("TEST_Definitions", "CT_TEST_Subject", NULL, NULL, TRUE));
current_location.update_lineno(75);
/* TEST_Test.ttcn, line 75 */
TEST__Functions::start_f__TEST__Watcher__watch(ct__watcher, ct__subject);
current_location.update_lineno(76);
/* TEST_Test.ttcn, line 76 */
{
tmp_6:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__watcher.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_6;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_6;
}
current_location.update_lineno(76);
/* TEST_Test.ttcn, line 76 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 76.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(77);
/* TEST_Test.ttcn, line 77 */
TEST__Functions::start_f__TEST__Subject__setverdict(ct__subject, FAIL, cs_1);
current_location.update_lineno(78);
/* TEST_Test.ttcn, line 78 */
{
tmp_7:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__subject.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_7;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_7;
}
current_location.update_lineno(78);
/* TEST_Test.ttcn, line 78 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 78.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(79);
/* TEST_Test.ttcn, line 79 */
TEST__Functions::start_f__TEST__Watcher__getverdict(ct__watcher, PASS, cs_0, TEST__Functions::f__TEST__Watcher__getverdict_new__timeout_defval);
current_location.update_lineno(80);
/* TEST_Test.ttcn, line 80 */
{
tmp_8:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__watcher.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_8;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_8;
}
current_location.update_lineno(80);
/* TEST_Test.ttcn, line 80 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 80.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(81);
/* TEST_Test.ttcn, line 81 */
{
TEST__Definitions::RT__TEST__Verdict_template tmp_9;
tmp_9.verdict() = FAIL;
tmp_9.reason() = cs_1;
TEST__Definitions::RT__TEST__Verdict_template tmp_10;
tmp_10.verdict() = PASS;
tmp_10.reason() = cs_0;
TEST__API__Functions::f__TEST__API__Watcher__getverdict(FAIL, (TTCN_Logger::begin_event_log2str(),TTCN_Logger::log_event_str("( fail )  Unexpected verdict received: "),tmp_9.log(),TTCN_Logger::log_event_str(" - Expected: "),tmp_10.log(),TTCN_Logger::end_event_log2str()), TEST__API__Functions::f__TEST__API__Watcher__getverdict_new__timeout_defval);
}
current_location.update_lineno(88);
/* TEST_Test.ttcn, line 88 */
TEST__API__Functions::f__TEST__API__UnitTest__Finished();
} catch (const TC_Error& tc_error) {
} catch (const TC_End& tc_end) {
TTCN_Logger::log_str(TTCN_FUNCTION, "Test case tc_TEST_UnitTest__Watcher__not_expected_receive was stopped.");
}
return TTCN_Runtime::end_testcase();
}

verdicttype testcase_tc__TEST__UnitTest____Watcher____expected__receive(boolean has_timer, double timer_value)
{
TTCN_Runtime::check_begin_testcase(has_timer, timer_value);
TTCN_Location current_location("TEST_Test.ttcn", 91, TTCN_Location::LOCATION_TESTCASE, "tc_TEST_UnitTest__Watcher__expected_receive");
try {
TTCN_Runtime::begin_testcase("TEST_Test", "tc_TEST_UnitTest__Watcher__expected_receive", "TEST_Definitions", "CT_TEST_Watcher", "TEST_Definitions", "CT_TEST_Watcher", has_timer, timer_value);
current_location.update_lineno(92);
/* TEST_Test.ttcn, line 92 */
TEST__API__Functions::f__TEST__API__UnitTest__Start();
current_location.update_lineno(94);
/* TEST_Test.ttcn, line 94 */
COMPONENT ct__watcher(TTCN_Runtime::create_component("TEST_Definitions", "CT_TEST_Watcher", NULL, NULL, TRUE));
current_location.update_lineno(95);
/* TEST_Test.ttcn, line 95 */
TEST__API__Functions::f__TEST__API__Watcher__watch(ct__watcher);
current_location.update_lineno(97);
/* TEST_Test.ttcn, line 97 */
COMPONENT ct__subject(TTCN_Runtime::create_component("TEST_Definitions", "CT_TEST_Subject", NULL, NULL, TRUE));
current_location.update_lineno(98);
/* TEST_Test.ttcn, line 98 */
TEST__Functions::start_f__TEST__Watcher__watch(ct__watcher, ct__subject);
current_location.update_lineno(99);
/* TEST_Test.ttcn, line 99 */
{
tmp_11:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__watcher.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_11;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_11;
}
current_location.update_lineno(99);
/* TEST_Test.ttcn, line 99 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 99.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(100);
/* TEST_Test.ttcn, line 100 */
TEST__Functions::start_f__TEST__Subject__setverdict(ct__subject, FAIL, cs_1);
current_location.update_lineno(101);
/* TEST_Test.ttcn, line 101 */
{
tmp_12:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__subject.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_12;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_12;
}
current_location.update_lineno(101);
/* TEST_Test.ttcn, line 101 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 101.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(102);
/* TEST_Test.ttcn, line 102 */
TEST__Functions::start_f__TEST__Watcher__getverdict(ct__watcher, FAIL, cs_1, TEST__Functions::f__TEST__Watcher__getverdict_new__timeout_defval);
current_location.update_lineno(103);
/* TEST_Test.ttcn, line 103 */
{
tmp_13:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__watcher.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_13;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_13;
}
current_location.update_lineno(103);
/* TEST_Test.ttcn, line 103 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 103.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(104);
/* TEST_Test.ttcn, line 104 */
{
TEST__Definitions::RT__TEST__Verdict_template tmp_14;
tmp_14.verdict() = FAIL;
tmp_14.reason() = cs_1;
TEST__API__Functions::f__TEST__API__Watcher__getverdict(PASS, (TTCN_Logger::begin_event_log2str(),TTCN_Logger::log_event_str("( pass )  Expected verdict received: "),tmp_14.log(),TTCN_Logger::end_event_log2str()), TEST__API__Functions::f__TEST__API__Watcher__getverdict_new__timeout_defval);
}
current_location.update_lineno(110);
/* TEST_Test.ttcn, line 110 */
TEST__API__Functions::f__TEST__API__UnitTest__Finished();
} catch (const TC_Error& tc_error) {
} catch (const TC_End& tc_end) {
TTCN_Logger::log_str(TTCN_FUNCTION, "Test case tc_TEST_UnitTest__Watcher__expected_receive was stopped.");
}
return TTCN_Runtime::end_testcase();
}

verdicttype testcase_tc__TEST__UnitTest____Watcher____receive__timeout(boolean has_timer, double timer_value)
{
TTCN_Runtime::check_begin_testcase(has_timer, timer_value);
TTCN_Location current_location("TEST_Test.ttcn", 113, TTCN_Location::LOCATION_TESTCASE, "tc_TEST_UnitTest__Watcher__receive_timeout");
try {
TTCN_Runtime::begin_testcase("TEST_Test", "tc_TEST_UnitTest__Watcher__receive_timeout", "TEST_Definitions", "CT_TEST_Watcher", "TEST_Definitions", "CT_TEST_Watcher", has_timer, timer_value);
current_location.update_lineno(114);
/* TEST_Test.ttcn, line 114 */
TEST__API__Functions::f__TEST__API__UnitTest__Start();
current_location.update_lineno(116);
/* TEST_Test.ttcn, line 116 */
COMPONENT ct__watcher(TTCN_Runtime::create_component("TEST_Definitions", "CT_TEST_Watcher", NULL, NULL, TRUE));
current_location.update_lineno(117);
/* TEST_Test.ttcn, line 117 */
TEST__API__Functions::f__TEST__API__Watcher__watch(ct__watcher);
current_location.update_lineno(119);
/* TEST_Test.ttcn, line 119 */
COMPONENT ct__subject(TTCN_Runtime::create_component("TEST_Definitions", "CT_TEST_Subject", NULL, NULL, TRUE));
current_location.update_lineno(120);
/* TEST_Test.ttcn, line 120 */
TEST__Functions::start_f__TEST__Watcher__watch(ct__watcher, ct__subject);
current_location.update_lineno(121);
/* TEST_Test.ttcn, line 121 */
{
tmp_15:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__watcher.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_15;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_15;
}
current_location.update_lineno(121);
/* TEST_Test.ttcn, line 121 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 121.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(122);
/* TEST_Test.ttcn, line 122 */
TEST__Functions::start_f__TEST__Watcher__getverdict(ct__watcher, FAIL, cs_1, 1.0e-1);
current_location.update_lineno(123);
/* TEST_Test.ttcn, line 123 */
{
tmp_16:
alt_status alt_flag = ALT_UNCHECKED, default_flag = ALT_UNCHECKED;
TTCN_Snapshot::take_new(FALSE);
for ( ; ; ) {
if (alt_flag != ALT_NO) {
alt_flag = ct__watcher.done(NULL);
if (alt_flag == ALT_YES) break;
else if (alt_flag == ALT_REPEAT) goto tmp_16;
}
if (default_flag != ALT_NO) {
default_flag = TTCN_Default::try_altsteps();
if (default_flag == ALT_YES || default_flag == ALT_BREAK) break;
else if (default_flag == ALT_REPEAT) goto tmp_16;
}
current_location.update_lineno(123);
/* TEST_Test.ttcn, line 123 */
if (alt_flag == ALT_NO && default_flag == ALT_NO) TTCN_error("Stand-alone done statement failed in file TEST_Test.ttcn, line 123.");
TTCN_Snapshot::take_new(TRUE);
}
}
current_location.update_lineno(124);
/* TEST_Test.ttcn, line 124 */
TEST__API__Functions::f__TEST__API__Watcher__getverdict(INCONC, cs_2, TEST__API__Functions::f__TEST__API__Watcher__getverdict_new__timeout_defval);
current_location.update_lineno(128);
/* TEST_Test.ttcn, line 128 */
TEST__API__Functions::f__TEST__API__UnitTest__Finished();
} catch (const TC_Error& tc_error) {
} catch (const TC_End& tc_end) {
TTCN_Logger::log_str(TTCN_FUNCTION, "Test case tc_TEST_UnitTest__Watcher__receive_timeout was stopped.");
}
return TTCN_Runtime::end_testcase();
}


/* Bodies of static functions */

static void pre_init_module()
{
TTCN_Location current_location("TEST_Test.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "TEST_Test");
TEST__API__Functions::module_object.pre_init_module();
module_object.add_testcase_nonpard("tc_TEST_UnitTest__Subject__expexted_pass__receive_pass", testcase_tc__TEST__UnitTest____Subject____expexted__pass____receive__pass);
module_object.add_testcase_nonpard("tc_TEST_UnitTest__Subject__expexted_inconc__receive_inconc", testcase_tc__TEST__UnitTest____Subject____expexted__inconc____receive__inconc);
module_object.add_testcase_nonpard("tc_TEST_UnitTest__Subject__expexted_fail__receive_fail", testcase_tc__TEST__UnitTest____Subject____expexted__fail____receive__fail);
module_object.add_testcase_nonpard("tc_TEST_UnitTest__Subject__receive_more_expected", testcase_tc__TEST__UnitTest____Subject____receive__more__expected);
module_object.add_testcase_nonpard("tc_TEST_UnitTest__Watcher__not_expected_receive", testcase_tc__TEST__UnitTest____Watcher____not__expected__receive);
module_object.add_testcase_nonpard("tc_TEST_UnitTest__Watcher__expected_receive", testcase_tc__TEST__UnitTest____Watcher____expected__receive);
module_object.add_testcase_nonpard("tc_TEST_UnitTest__Watcher__receive_timeout", testcase_tc__TEST__UnitTest____Watcher____receive__timeout);
}

static void post_init_module()
{
TTCN_Location current_location("TEST_Test.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "TEST_Test");
TEST__API__Functions::module_object.post_init_module();
}

static void module_control_part()
{
TTCN_Location current_location("TEST_Test.ttcn", 131, TTCN_Location::LOCATION_CONTROLPART, "TEST_Test");
TTCN_Runtime::begin_controlpart("TEST_Test");
current_location.update_lineno(132);
/* TEST_Test.ttcn, line 132 */
testcase_tc__TEST__UnitTest____Subject____expexted__pass____receive__pass(FALSE, 0.0);
current_location.update_lineno(133);
/* TEST_Test.ttcn, line 133 */
testcase_tc__TEST__UnitTest____Subject____expexted__inconc____receive__inconc(FALSE, 0.0);
current_location.update_lineno(134);
/* TEST_Test.ttcn, line 134 */
testcase_tc__TEST__UnitTest____Subject____expexted__fail____receive__fail(FALSE, 0.0);
current_location.update_lineno(135);
/* TEST_Test.ttcn, line 135 */
testcase_tc__TEST__UnitTest____Subject____receive__more__expected(FALSE, 0.0);
current_location.update_lineno(137);
/* TEST_Test.ttcn, line 137 */
testcase_tc__TEST__UnitTest____Watcher____not__expected__receive(FALSE, 0.0);
current_location.update_lineno(138);
/* TEST_Test.ttcn, line 138 */
testcase_tc__TEST__UnitTest____Watcher____expected__receive(FALSE, 0.0);
current_location.update_lineno(139);
/* TEST_Test.ttcn, line 139 */
testcase_tc__TEST__UnitTest____Watcher____receive__timeout(FALSE, 0.0);
TTCN_Runtime::end_controlpart();
}


} /* end of namespace */