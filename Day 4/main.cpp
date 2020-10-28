#include "shape.h"

int main(){
    int width=1;
    int height=1;




    Shape *pShape [4] = {
        new Triangle(width,height),
        new Rectangle(width,height),
        new Square(width),
        new Circle(width)
    };


std::cout << areaisEqual<Shape&>(*pShape[2], *pShape[2]) << std::endl;

/*if (areaisEqual(pShape[2], pShape[3])){

    std::cout << "Area is equal" << std::endl;
}
else{
    std::cout << "Area is NOT equal" << std::endl;
}
*/
    /*

for (int i=0;i<3;i++){
    
    if (*pShape[i]==*pShape[i+1]){

    std::cout << "Area and Perimeter of " << pShape[i]->shapename << " are equal to " << pShape[i+1]->shapename << 
    "   (Area: " << pShape[i]->area() << ", Perimeter: " << pShape[i]->perimeter() << ")" << std::endl << std::endl;
    }
}

for (int i=0;i<3;i++){
    //for(int j=0;)
    
    if (*pShape[i]<*pShape[i+1]){

    std::cout << "Area and Perimeter of " << pShape[i]->shapename << " are smaller than " << pShape[i+1]->shapename << std::endl
    << pShape[i]->shapename << ":   (Area: " << pShape[i]->area() << ", Perimeter: " << pShape[i]->perimeter() << ")" << std::endl
    << pShape[i+1]->shapename << ":   (Area: " << pShape[i+1]->area() << ", Perimeter: " << pShape[i+1]->perimeter() << ")" << std::endl;
    }    
}

delete *pShape;
*/
return 0;
}
