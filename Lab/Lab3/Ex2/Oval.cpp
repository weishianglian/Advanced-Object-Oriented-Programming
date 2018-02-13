#include "Oval.h"

using namespace std;

Oval::Oval() {}

void Oval::input() {
    double majorRadius = 0.0;
    double minorRadius = 0.0;
    cout << "Please enter the ellipse's major radius: (cm)" << endl;
    cin >> majorRadius;
    if (majorRadius < 0)
        throw invalid_argument("The major radius must be greater equal than zero.");
    else
        this->majorRadius = majorRadius;
    cout << "Please enter the ellipse's minor radius: (cm)" << endl;
    cin >> minorRadius;
    if (minorRadius < 0)
        throw invalid_argument("The minor radius must be greater equal than zero.");
    else
        this->minorRadius = minorRadius;
}

void Oval::calculateArea() {
    setShapeName("oval");
    setArea(majorRadius * minorRadius * getPI());
}