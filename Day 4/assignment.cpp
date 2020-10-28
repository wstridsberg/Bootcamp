#include "shape.h"

bool Shape::operator == (Shape& ar)
        {
            if(this->area()==ar.area() && this->perimeter()==ar.perimeter()){
            return true;
            }
            return false;
        }

bool Shape::operator < (Shape& ar)
        {
            if(this->area()<ar.area()){
                if (this->perimeter()<ar.perimeter()){
                return true;
                }
            }
            return false;
        }
bool Shape::operator > (Shape& ar)
        {
            if(this->area()>ar.area()){
                if (this->perimeter()>ar.perimeter()){
                return true;
                }
            }
            return false;
        }
