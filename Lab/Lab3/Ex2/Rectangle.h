#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle();

    virtual void input() override;
    virtual void calculateArea() override;
    
private:
    double length = 0.0;
    double width = 0.0;
};

#endif