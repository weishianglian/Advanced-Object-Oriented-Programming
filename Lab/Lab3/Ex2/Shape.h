#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
#include <iostream>
#include <stdexcept>

class Shape {
public:
    Shape();

    double getArea() const;
    void setArea(double=0.0);
    void setShapeName(std::string);
    double getPI() const;
    virtual void input() = 0;
    virtual void calculateArea() = 0;
    virtual void print() const;

private:
    const double pi = 3.1415926;
    double area = 0.0;
    std::string shapeName = "shape";
};

#endif