#include <iostream>
#include <bitset>

struct Val
{
    unsigned speed : 4;
    unsigned dfront : 3;
    unsigned drear : 3;
    unsigned dleft : 3;
    unsigned dright : 3;
};

uint16_t encode(uint, uint, uint, uint, uint);

void detectcrash(uint16_t);