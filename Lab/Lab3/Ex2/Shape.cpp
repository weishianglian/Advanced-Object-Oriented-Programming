#include "Shape.h"

using namespace std;

Shape::Shape() {}

double Shape::getArea() const {
    return area;
}
void Shape::setArea(double area) {
    this->area = area;
} 
void Shape::setShapeName(string shapeName) {
    this->shapeName = shapeName;
} 
double Shape::getPI() const {
    return pi;
}
void Shape::print() const {
    cout << "The " << shapeName << " area is " << area << " cm^2" << endl << endl;
}