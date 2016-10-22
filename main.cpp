#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
    Circle* c = new Circle(10,9,3);
    Point* p = new Point(1,2);
    cout << c->toString();
    return 0;
}