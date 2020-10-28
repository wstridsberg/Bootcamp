#include "pcapOpenner.h"
#include <iostream>
#include  <iomanip>

int main(){

    pcapOpenner packopen; packopen.initPCAP("/home/hstridsb/Documents/Projects/Bootcamp/Day 8/packet.pcap");

    Packet_t mypack = packopen.getPacket();

    for (int i=0; i<14; i++){

        std::cout << std::setfill('0') << std::setw(2) << std::right << std::hex << (int)mypack.data[i] << " ";
        }

std::cout << std::endl;


}