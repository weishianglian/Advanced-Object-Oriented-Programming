#include "Square.h"

using namespace std;

Square::Square() {}

void Square::input() {
    double side = 0.0;
    cout << "Please enter square's side: (cm)" << endl;
    cin >> side;
    if (side < 0)
        throw invalid_argument("The side must be greater equal than zero.");
    else
        this->side = side;
}

void Square::calculateArea() {
    setShapeName("square");
    setArea(side * side);
}