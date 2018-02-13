#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() {}

void Rectangle::input() {
    double length = 0.0;
    double width = 0.0;
    cout << "Please enter retangle's length: (cm)" << endl;
    cin >> length;
    if (length < 0)
        throw invalid_argument("The length must be greater equal than zero.");
    else
        this->length = length;
    cout << "Please enter retangle's width: (cm)" << endl;
    cin >> width;
    if (width < 0)
        throw invalid_argument("The width must be greater equal than zero.");
    else
        this->width = width;
}

void Rectangle::calculateArea() {
    setShapeName("rectangle");
    setArea(length * width);
}