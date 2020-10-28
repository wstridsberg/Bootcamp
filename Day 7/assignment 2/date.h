#include <iostream>
#include <string>

enum month {january, february, march, april, may, june, july, august, september, october, november, december};

std::string get_month(month);

class date{
    public:
    unsigned int customer_year=2020;
    month customer_month=april;
    unsigned int customer_day=20;

};

