#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
    Circle* c = new Circle(2,2,5);
    Point* p = new Point(2,2);
    cout << c->toString() << endl;
    //cout << p->toString() << endl;
    cout << getDistance(p, c);
    return 0;
}