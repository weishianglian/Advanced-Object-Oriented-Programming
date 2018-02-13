#include <vector>

#include "Circle.h"
#include "Oval.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"

using namespace std;

int main() {
    Circle *circle = new Circle();
    Oval *oval = new Oval();
    Rectangle *rectangle = new Rectangle();
    Square *square = new Square();
    Triangle *triangle = new Triangle();
    
    vector<Shape *> shapes(5);
    shapes[0] = circle;
    shapes[1] = oval;
    shapes[2] = rectangle;
    shapes[3] = square;
    shapes[4] = triangle;

    for (Shape *shape : shapes) {
        shape->input();
        shape->calculateArea();
        shape->print();
    }
    
    return 0;
};