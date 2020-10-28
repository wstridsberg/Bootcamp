#include <iostream>

struct field_Data
{
    unsigned light_head : 1;
    unsigned light_low : 1;
    unsigned light_tail : 1;
    unsigned door_rear_R : 1;
    unsigned door_rear_L : 1;
    unsigned door_front_R : 1;
    unsigned door_front_L : 1;
    unsigned window_rear_R : 1;
    unsigned window_rear_L : 1;
    unsigned window_front_R : 1;
    unsigned window_front_L : 1;
    unsigned seatbelt_rear_R : 1;
    unsigned seatbelt_rear_M : 1;
    unsigned seatbelt_rear_L : 1;
    unsigned seatbelt_front_R : 1;
    unsigned seatbelt_front_L : 1;
};

union K
{
    field_Data A;
    uint16_t B;
};

void printstatus(const uint16_t &);
