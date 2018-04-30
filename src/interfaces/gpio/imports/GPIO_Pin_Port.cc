///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2000-2017 Ericsson Telecom AB
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the Eclipse Public License v1.0
// which accompanies this distribution, and is available at
// http://www.eclipse.org/legal/epl-v10.html
//
// Contributors:
// Lenard Nagy
// version R2A
///////////////////////////////////////////////////////////////////////////////

#include "GPIO_Pin_Port.hh"
#include "Logger.hh"
#include <stdarg.h>

namespace GPIOPinPort {

	static const char *gpio_dir      = "/sys/class/gpio/";
	static const char *export_file   = "/sys/class/gpio/export";
	static const char *unexport_file = "/sys/class/gpio/unexport";

	//DEBUG
	//const char *export_file   = "/home/elnrnag/gpio/export";
	//const char *unexport_file = "/home/elnrnag/gpio/unexport";
	//DEBUG

	static const string GPIO_DIRECTION_OUT = "out";
	static const string GPIO_DIRECTION_IN  = "in";
	static const string GPIO_VALUE_HIGH    = "1";
	static const string GPIO_VALUE_LOW     = "0";
	static const string GPIO_EDGE_NONE     = "none";
	static const string GPIO_EDGE_BOTH     = "both";

	static const int NUMBER_OF_PINS = 26;

GPIO__Pin__Port::GPIO__Pin__Port(const char *par_port_name)
	: GPIO__Pin__Port_BASE(par_port_name)
        , debugAllowed(false) // debug disabled by default
{

}

GPIO__Pin__Port::~GPIO__Pin__Port()
{

}

void GPIO__Pin__Port::log_debug(const char *fmt, ...)
{
	if (debugAllowed) {
//	if (true) {
		va_list ap;
		va_start(ap, fmt);
		TTCN_Logger::begin_event(TTCN_DEBUG);
		TTCN_Logger::log_event("GPIO Test Port (%s): ", get_name());
		TTCN_Logger::log_event_va_list(fmt, ap);
		TTCN_Logger::end_event();
		va_end(ap);
	}
}

void GPIO__Pin__Port::set_parameter(const char *parameter_name,
	const char *parameter_value)
{
	if (!strcasecmp(parameter_name, "debug")) {
		if (!strcasecmp(parameter_value,"YES")) {
			debugAllowed = true;
		}
	}
}

/*void GPIO__Pin__Port::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void GPIO__Pin__Port::Handle_Fd_Event_Error(int fd)
{
	Handle_Fd_Event_Readable(fd);
}

void GPIO__Pin__Port::Handle_Fd_Event_Writable(int /*fd*/)
{

}

void GPIO__Pin__Port::Handle_Fd_Event_Readable(int fd)
{
	//unregister_fd_handler();
	//set_edge_on_pin(GPIO_EDGE_NONE);
	//log_debug("FileDescriptor: %d",fd);

	GPIOPinPort::GPIO__PIN__VALUE ret_val;
	if (get_value_of_pin() == GPIO_VALUE_HIGH) {
		ret_val = GPIO__PIN__VALUE::HIGH;
	} else {
		ret_val = GPIO__PIN__VALUE::LOW;
	}

	if (ret_val != original_value) {
	  original_value = ret_val;
          log_debug("Received value on %s: is %s", pin.c_str(),get_value_of_pin().c_str());
	  incoming_message(ret_val);
	}

}

/*void GPIO__Pin__Port::Handle_Timeout(double time_since_last_call) {}*/

void GPIO__Pin__Port::user_map(const char * system_port)
{
	if ((strlen(system_port) >= 5) && (strlen(system_port) <= 8)) {
		char* str = (char*)malloc(strlen(system_port)+1);
		strcpy(str, system_port);

		removechars(str, '[');
		removechars(str, ']');

		pin.assign(str);
		log_debug("length: %zd ",strlen(pin.c_str()));

		pin_num.assign(str+4);

		log_debug("Mapping %s ", pin.c_str());
		export_pin();
	} else {
		TTCN_error("Invalid gpio pin name: %s\nThe port variable name in TTCN code MUST be \"gpio[2-27]\"\n", pin.c_str());

	}
}

void GPIO__Pin__Port::user_unmap(const char * system_port)
{
	unregister_fd_handler(fd_edge);
	unexport_pin();
}

void GPIO__Pin__Port::user_start()
{

}

void GPIO__Pin__Port::user_stop()
{

}

void GPIO__Pin__Port::outgoing_send(const GPIO__PIN__DIRECTION& direction)
{
	if (direction == GPIO__PIN__DIRECTION::IN) {
		set_direction_of_pin(GPIO_DIRECTION_IN);
		set_edge_on_pin(GPIO_EDGE_BOTH);

		if (get_value_of_pin() == GPIO_VALUE_HIGH) {
		  original_value = GPIO__PIN__VALUE::HIGH;
		} else {
		  original_value = GPIO__PIN__VALUE::LOW;
		}

	} else if (direction == GPIO__PIN__DIRECTION::OUT) {
		set_edge_on_pin(GPIO_EDGE_NONE);
		set_direction_of_pin(GPIO_DIRECTION_OUT);
	} else {
		//TODO: ERROR, must be set
	}
}

void GPIO__Pin__Port::outgoing_send(const GPIO__PIN__VALUE& value)
{
	if (value == GPIO__PIN__VALUE::LOW) {
		set_value_of_pin(GPIO_VALUE_LOW);
	} else if (value == GPIO__PIN__VALUE::HIGH) {
		set_value_of_pin(GPIO_VALUE_HIGH);
	} else {
		TTCN_error("Value for %s must be set", pin.c_str());
	}
}

void GPIO__Pin__Port::outgoing_send(const GPIO__PIN__STATUS& stat)
{
	GPIO__PIN__STATUS status;
	if (file_exists(get_pin_dir())){
		status.is__exported() = true;

		string direction = get_direction_of_pin();
		if (0 == direction.compare(GPIO_DIRECTION_IN)) {
			status.direction() = GPIO__PIN__DIRECTION::IN;
		} else if (0 == direction.compare(GPIO_DIRECTION_OUT)) {
			status.direction() = GPIO__PIN__DIRECTION::OUT;
		} else {
			TTCN_error("Invalid direction when reading direction of %s", pin.c_str());
		}

		string value = get_value_of_pin();
		if (0 == value.compare(GPIO_VALUE_LOW)) {
			status.val() = GPIO__PIN__VALUE::LOW;
		} else if (0 == value.compare(GPIO_VALUE_HIGH)) {
			status.val() = GPIO__PIN__VALUE::HIGH;
		} else {
			TTCN_error("Invalid value when reading value of %s ", pin.c_str());
		}
	} else {
		status.is__exported() = false;
	}
	incoming_message(status);
}

//Utility functions
void GPIO__Pin__Port::export_pin() {
	if (!file_exists(get_pin_dir().c_str())) {
		log_debug("Exporting gpio%s (export file: %s) ",pin_num.c_str(), export_file);
		ofstream exfile;
		exfile.exceptions(ofstream::failbit | ofstream::badbit);
		exfile.open (export_file);
		exfile << pin_num.c_str();
	} else {
		log_debug("===WARNING=== %s was already exported!",pin.c_str());
	}
}

void GPIO__Pin__Port::unexport_pin() {
	log_debug("Unexporting gpio%s (export file: %s)", pin_num.c_str(), export_file);
	ofstream unexfile;
	unexfile.exceptions(ofstream::failbit | ofstream::badbit);
	unexfile.open (unexport_file);
	string pin_s(pin_num);
	unexfile << pin_s.c_str();

}


void GPIO__Pin__Port::set_direction_of_pin(const string direction) {
	string pin_direction_filename = get_pin_dir()+"/direction";
	log_debug("Set direction of %s to %s", pin.c_str(), direction.c_str());
	ofstream pin_direction_file;
	pin_direction_file.exceptions(ofstream::failbit | ofstream::badbit);
	pin_direction_file.open (pin_direction_filename.c_str());
	pin_direction_file << direction.c_str();
	pin_direction_file.close();
}


string GPIO__Pin__Port::get_direction_of_pin() {
	string pin_direction_filename = get_pin_dir()+"/direction";
	string line;
	ifstream pin_direction_file;
	pin_direction_file.exceptions(ifstream::failbit | ifstream::badbit);
	pin_direction_file.open (pin_direction_filename.c_str());
	getline(pin_direction_file,line);
	pin_direction_file.close();
	return line;
}

void GPIO__Pin__Port::set_value_of_pin(const string value) {
	string pin_value_filename = get_pin_dir()+"/value";
	log_debug("Set value of %s to %s ", pin.c_str(), value.c_str());
	ofstream pin_value_file;
	pin_value_file.exceptions(ofstream::failbit | ofstream::badbit);
	pin_value_file.open (pin_value_filename.c_str());
	pin_value_file << value.c_str();
	pin_value_file.close();
}

string GPIO__Pin__Port::get_value_of_pin() {
	string pin_value_filename = get_pin_dir()+"/value";
	string line;
	ifstream pin_value_file;
	pin_value_file.exceptions(ifstream::failbit | ifstream::badbit);
	pin_value_file.open (pin_value_filename.c_str());
	getline(pin_value_file,line);
	pin_value_file.close();
	return line;
}

void GPIO__Pin__Port::set_edge_on_pin(const string edge) {
	string pin_edge_filename = get_pin_dir()+"/edge";
	log_debug("Set edge to \"%s\" on %s ", edge.c_str(),pin.c_str());
	ofstream pin_edge_file;
	pin_edge_file.exceptions(ofstream::failbit | ofstream::badbit);
	pin_edge_file.open (pin_edge_filename.c_str());
	pin_edge_file << edge.c_str();
	pin_edge_file.close();
	if (edge != GPIO_EDGE_NONE) {
		int fd = open(pin_edge_filename.c_str(),O_RDONLY);
		register_fd_handler(fd);
	}

}

void GPIO__Pin__Port::register_fd_handler(int fd) {
	if (fd > 0) {
		Handler_Add_Fd_Read(fd);
		fd_edge = fd;
	}
}

void GPIO__Pin__Port::unregister_fd_handler(int fd) {
	if (fd > 0) {
		Handler_Remove_Fd_Read(fd);
		close(fd);
		fd_edge = -1;
	}
}


string GPIO__Pin__Port::int2string(int i) {
	string str;
	stringstream ss;
	ss << i;
	ss >> str;
	return str;
}

int GPIO__Pin__Port::string2int(const char* str) {
	stringstream strValue;
	strValue << str;

	unsigned int intValue;
	strValue >> intValue;

	return intValue;
}

void GPIO__Pin__Port::removechars(char* s, char c) {
	int writer = 0, reader = 0;
	while (s[reader])
    	{
	       	if (s[reader]!=c)
        	{
        		s[writer++] = s[reader];
        	}
        	reader++;
    	}
	s[writer]=0;
}

bool GPIO__Pin__Port::file_exists (const std::string& name) {
	return ( access( name.c_str(), F_OK ) != -1 );
}

string GPIO__Pin__Port::get_pin_dir() {
	return string(gpio_dir)+pin;
}

} /* end of namespace */

