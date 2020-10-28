#include <iostream>
#include <cmath>





class Shape {
    protected:
        int width, height;
    public:
        std::string shapename; 
        virtual int area()=0;
        virtual int perimeter()=0;
        bool operator == (Shape&);
        bool operator < (Shape&);
        bool operator > (Shape&);

    virtual ~Shape() {

    };

};

template <typename T>
bool areaisEqual (T &A, T &B){
    bool returnvalue=false;
    if (A==B){
        returnvalue=true;
    }
    return returnvalue;
} 

class Circle : public Shape {
    public:
    int area() {return std::pow ((width/2),height);}
    int perimeter() {return width*height;}
    Circle(int a) {width=a; height=3, shapename="Circle";}
};

class Rectangle : public Shape {
    public:
    int area() {return width*height;}
    int perimeter() {return width*2+height*2;}
    Rectangle(int a, int b) {width=a, height=b, shapename="Rectangle";}
};

class Square : public Shape {
    public:
    int area() {return width*height;}
    int perimeter() {return width*4;}
    Square(int a) {width=a, height=a, shapename="Square";}
};

class Triangle : public Shape {
    public:
    int area() {return width*height/2;}
    int perimeter() {return width*3;}
    Triangle(int a, int b) {width=a, height=b, shapename="Triangle";}
};



