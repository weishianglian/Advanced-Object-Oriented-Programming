#include "Circle.h"

using namespace std;

Circle::Circle() {}

void Circle::input() {
    double radius = 0.0;
    cout << "Please enter the circle's radius: (cm)" << endl;
    cin >> radius;
    if (radius < 0)
        throw invalid_argument("The radius must be greater equal than zero.");
    else
        this->radius = radius;
}

void Circle::calculateArea() {
    setShapeName("circle");
    setArea(radius * radius * getPI());
}