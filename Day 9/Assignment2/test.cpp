#include "shape.h"

void test0(int a){

    Circle testcirc(a);
    testcirc.print(); 
}

void test1(int b, int c){

    Rectangle testrect(b, c); 
    testrect.print(); 
    
}

void test2(int d, int e){
    Triangle testtri(d, e);
    testtri.print();
}


int main(){

    test0(-6); // Create circle with negative perimeter

    test1(0, 0); //Create rectangle with 0 perimeter and area

    test2(999999999999999999999999, 999999999999999999999999); // overflow int creats negative perimeter and area
    
    return 0;
}

