#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"

class Triangle : public Shape {
public:
    Triangle();

    virtual void input() override;
    virtual void calculateArea() override;
    
private:
    double base = 0.0;
    double height = 0.0;
};

#endif