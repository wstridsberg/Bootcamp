#include "assign2.h"

uint16_t encode(uint _speed, uint _dfront, uint _drear, uint _dright, uint _dleft)
{

    Val k;

    k.speed = _speed / 20;
    k.dfront = _dfront / 150;
    k.drear = _drear / 150;
    k.dright = _dright / 150;
    k.dleft = _dleft / 150;

    uint16_t encoded = k.speed << 12 | k.dfront << 9 | k.drear << 6 | k.dright << 3 | k.dleft;

    return encoded;
}

void detectcrash(uint16_t _c)
{
    std::bitset<16> all_bits = _c, speedmask = 0b1111000000000000, dfrontmask = 0b0000111000000000,
                    drearmask = 0b0000000111000000, drightmask = 0b0000000000111000, dleftmask = 0b0000000000000111;

    if ((all_bits & speedmask) != 0)
    {
        if ((all_bits & dfrontmask) == 0)
        {
            std::cout << "Front collision" << std::endl;
        }
        else if ((all_bits & drearmask) == 0)
        {
            std::cout << "Rear collision" << std::endl;
        }
        else if ((all_bits & drightmask) == 0)
        {
            std::cout << "Right collision" << std::endl;
        }
        else if ((all_bits & dleftmask) == 0)
        {
            std::cout << "Left collision" << std::endl;
        }
        else{
            std::cout << "No crash" << std::endl;
        }
    }
    else
    {
        std::cout << "Car is not moving" << std::endl;
    }
}



