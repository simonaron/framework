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

#ifndef GPIO__Pin__Port_HH
#define GPIO__Pin__Port_HH

#include "GPIOPinPort.hh"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
using namespace std;


namespace GPIOPinPort {

class GPIO__Pin__Port : public GPIO__Pin__Port_BASE {
public:
	GPIO__Pin__Port(const char *par_port_name = NULL);
	~GPIO__Pin__Port();

	void set_parameter(const char *parameter_name,
		const char *parameter_value);
private:
	/* void Handle_Fd_Event(int fd, boolean is_readable,
		boolean is_writable, boolean is_error); */
	void Handle_Fd_Event_Error(int fd);
	void Handle_Fd_Event_Writable(int fd);
	void Handle_Fd_Event_Readable(int fd);
	/* void Handle_Timeout(double time_since_last_call); */
	bool debugAllowed; 

protected:
	string pin; //Will contain the gpio pin name, e.g. "gpio24"
	string pin_num; //Will contain only the gpio pin number, e.g. "24"

	int fd_edge;

	void user_map(const char *system_port);
	void user_unmap(const char *system_port);

	void user_start();
	void user_stop();

	void outgoing_send(const GPIO__PIN__DIRECTION& send_par);
	void outgoing_send(const GPIO__PIN__VALUE& send_par);
	void outgoing_send(const GPIO__PIN__STATUS& send_par);

	void export_pin();
	void unexport_pin();
	void set_direction_of_pin(const string direction);
	string get_direction_of_pin();
	void set_value_of_pin(const string value);
	string get_value_of_pin();
	void set_edge_on_pin(const string edge);
	void register_fd_handler(int fd);
	void unregister_fd_handler(int fd);
	string int2string(int i);
	int string2int(const char* str);
	void removechars(char* s, char c);
	bool file_exists (const std::string& name);
	string get_pin_dir();
        GPIO__PIN__DIRECTION original_value;
	void log_debug(const char*, ...);
	};

} /* end of namespace */

#endif
