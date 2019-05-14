#include <iostream>
#include "UserInput.h"
#include "Bus.h"
#include "BusReservation.h"

using std::cout;
using std::cin;
using std::endl;

void make_selection();
void display_menu();
void install_bus_info(const Bus &target);
void make_reservation();
void display_buses(const BusReservation &bus_list);
void show_available_seats(const Bus &target);

void display_buses() {
    
}
void make_reservation() { //creates reservation object to put into bus's seat array
    
}
void install_bus_info() { //creates a bus object
    
}
void make_selection() {
    cout << "Make Selection ->";
    int selection{};
    selection = UserInput::get_int();
    switch (selection) {
         case 1: install_bus_info(); //formats the fields of bus object
                 break;
         case 2: make_reservation(); //input fields for reservation object
                 break;
         case 3: show_available_seats(); //formats and creates visual for seats on the bus
                 break;
         case 4: display_buses();    //formats all available buses- only shows bus number and destination
                 break;              //users install the bus info to see details
         case 5: return;
                 break;
        default: cout << "Enter valid selection." << endl; 
                 make_selection();
    }
}
void display_menu() {
    cout << "1) Install Bus Information" << endl;
    cout << "2) Make Reservation" << endl;
    cout << "3) Show Reservations" << endl;
    cout << "4) Display Available Buses" << endl;
    cout << "5) Exit" << endl;
    
}
int main()
{
display_menu();
return 0;
}