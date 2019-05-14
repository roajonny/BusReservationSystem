#ifndef BUS_O
#define BUS_O
#include <string>
#include "BusReservation.h"

using std::string;

class Bus
{
private:
    unsigned int bus_number{}; //key
    string driver_name{};
    string to{};
    string from{};
    string departure_time{}; 
    string arrival_time{};
    BusReservation seats[32]; //Reservation objects are stored here

public:
    Bus(unsigned int bus_no, 
    string driver, string to_dest, 
    string from_loc, 
    string depart_time, 
    string arrive_time);
   
   ~Bus();

    void show_reservation();

//GET
    int get_bus_number();
    string get_driver_name();
    string get_to();
    string get_from();
    string get_departure_time();
    string get_arrival_time();

};

#endif // BUS_O
