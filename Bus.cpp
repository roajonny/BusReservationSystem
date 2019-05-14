#include <iostream>
#include <string>
#include "Bus.h"
#include "UserInput.h"

using std::cout;
using std::cin;
using std::endl;
using std::string; 

Bus::Bus(unsigned int bus_no, string driver, string to_dest, string from_loc, 
         string depart_time, 
         string arrive_time)
: bus_number(bus_no), driver_name (driver), to(to_dest), from(from_loc), departure_time(depart_time), 
  arrival_time(arrive_time) {
}

Bus::~Bus()
{
}

    int Bus::get_bus_number() {
        return bus_number;
}
    string Bus::get_driver_name() {
        return driver_name;
}
    string Bus::get_to() {
        return to; //destination
}
    string Bus::get_from() {
        return from; //initial location
}
    string Bus::get_departure_time() {
        return departure_time;
}
    string Bus::get_arrival_time() {
        return arrival_time;        
    }

