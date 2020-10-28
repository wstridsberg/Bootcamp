#include "shape.h"

int main(){


    Shape *circ1 = new Circle(5);
    Shape *circ2 =  new Circle(5);

    Shape *triang1 = new Triangle(2,23);
    Shape *triang2 = new Triangle(3,5);

    Shape *rectangle1 = new Rectangle(1,2);
    Shape *rectangle2 = new Rectangle(2,1);

    Shape *shapes [6] ={circ1,circ2,triang1,triang2,rectangle1,rectangle2};


    std::cout << areaisEqual<Shape&>(*shapes[2], *shapes[2]) << std::endl;



    for (size_t i = 0; i < 6; i++) 
        for (size_t j = i + 1; j < 6; j++) {
            if (areaisEqual<Shape&>(*shapes[i], *shapes[j])) std::cout << "Area of " << i << " is equal to " << j << std::endl;    
        }    

    for(size_t i=0;i<6;i++)
        delete shapes[i];

    return 0;
}

