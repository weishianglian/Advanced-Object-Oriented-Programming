#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape {
public:
    Circle();

    virtual void input() override;
    virtual void calculateArea() override;
private:
    double radius = 0.0;
};

#endif