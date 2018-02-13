#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square : public Shape {
public:
    Square();

    virtual void input() override;
    virtual void calculateArea() override;
    
private:
    double side = 0.0;
};

#endif