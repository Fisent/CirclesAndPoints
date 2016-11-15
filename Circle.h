//
// Created by lukasz on 2016-10-22.
//

#ifndef CIRCLESANDPOINTS_CIRCLE_H
#define CIRCLESANDPOINTS_CIRCLE_H

#include "Point.h"
#include <string>
#include "Circle.h"

class Point;;
class Circle {
public:
    Circle(double x, double y, double r);
    virtual ~Circle();
    std::string toString();
    friend double getDistance(Point *point, Circle *circle);

private:
    double x;
    double y;
    double r;
};


#endif //CIRCLESANDPOINTS_CIRCLE_H
