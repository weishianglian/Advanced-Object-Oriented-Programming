#include "Triangle.h"

using namespace std;

Triangle::Triangle() {}

void Triangle::input() {
    double base = 0.0;
    double height = 0.0;
    cout << "Please enter triangle's base: (cm)" << endl;
    cin >> base;
    if (base < 0)
        throw invalid_argument("The base must be greater equal than zero.");
    else
        this->base = base;
    cout << "Please enter triangle's height: (cm)" << endl;
    cin >> height;
    if (height < 0)
        throw invalid_argument("The height must be greater equal than zero.");
    else
        this->height = height;
}

void Triangle::calculateArea() {
    setArea(base * height / 2);
}