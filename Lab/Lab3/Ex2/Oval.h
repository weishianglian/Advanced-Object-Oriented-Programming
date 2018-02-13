#ifndef OVAL_H_
#define OVAL_H_

#include "Shape.h"

class Oval : public Shape {
public:
    Oval();

    virtual void input() override;
    virtual void calculateArea() override;
    
private:
    double majorRadius = 0.0;
    double minorRadius = 0.0;
};

#endif