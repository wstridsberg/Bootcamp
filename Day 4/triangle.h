#include <iostream>
#include <cmath>

class Shape {
    protected:
        int width, height;
    public:
        virtual int area()=0;
        virtual int perimeter()=0;
    virtual ~Shape() {

    };

};

class Circle : public Shape {
    public:
    int area() {return std::pow ((width/2),height);}
    int perimeter() {return width*height;}
    Circle(int a) {width=a; height=3;}
};

class Rectangle : public Shape {
    public:
    int area() {return width*height;}
    int perimeter() {return width*2+height*2;}
    Rectangle(int a, int b) {width=a, height=b;}
};

class Square : public Shape {
    public:
    int area() {return width^2;}
    int perimeter() {return width*4;}
    Square(int a) {width=a, height=a;}





class Triangle : public Shape {
    public:

    int area() {return width*height/2;}
    int perimeter() {return width*3.14;}
    Circle(int a) {width=a, height=a;}
};

