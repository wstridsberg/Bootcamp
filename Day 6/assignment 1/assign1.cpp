#include "assign1.h"

void printstatus(const uint16_t &p)
{

    K uniD;
    uniD.B = p;
    std::cout << "Seat belt front left status: " << uniD.A.seatbelt_front_L << std::endl;
    std::cout << "Seat belt front right status: " << uniD.A.seatbelt_front_R << std::endl;
    std::cout << "Seat belt rear left status: " << uniD.A.seatbelt_rear_L << std::endl;
    std::cout << "Seat belt rear middle status: " << uniD.A.seatbelt_rear_M << std::endl;
    std::cout << "Seat belt rear right status: " << uniD.A.seatbelt_rear_R << std::endl;
    std::cout << "Window front left status: " << uniD.A.window_front_L << std::endl;
    std::cout << "Window front right status: " << uniD.A.window_front_R << std::endl;
    std::cout << "Window rear left status: " << uniD.A.window_rear_L << std::endl;
    std::cout << "Window rear right status: " << uniD.A.window_rear_R << std::endl;
    std::cout << "Door front left status: " << uniD.A.door_front_L << std::endl;
    std::cout << "Door front right status: " << uniD.A.door_front_R << std::endl;
    std::cout << "Door rear left status: " << uniD.A.door_rear_L << std::endl;
    std::cout << "Door rear right status: " << uniD.A.door_rear_R << std::endl;
    std::cout << "Head light status: " << uniD.A.light_head << std::endl;
    std::cout << "Low beam status: " << uniD.A.light_low << std::endl;
    std::cout << "Tail light status: " << uniD.A.light_tail << std::endl;
}
