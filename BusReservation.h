#ifndef BUS_RESERVATION_S_
#define BUS_RESERVATION_S_
#include <string>

using std::string;

class BusReservation
{
private:
    string first_name{};
    string last_name{};
    string date_of_birth{};
    string email_address{};
    string phone_number{};
    
public:
    BusReservation() 
    : first_name(first_name), last_name(last_name), date_of_birth(date_of_birth), email_address(email_address), phone_number(phone_number) {
        };
    ~BusReservation();
    
    string get_first_name(string first_name);
    string get_last_name(string last_name);
    string get_date_of_birth(string date_of_birth);
    string get_email_address(string email_address);
    string get_phone_number(string phone_number);
};

#endif // BUS_RESERVATION_S_
