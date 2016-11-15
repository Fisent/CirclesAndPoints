//
// Created by lukasz on 2016-10-22.
//

#ifndef CIRCLESANDPOINTS_POINT_H
#define CIRCLESANDPOINTS_POINT_H

#include <string>
#include "Circle.h"


class Circle;
class Point {
public:
    Point(double x, double y);
    virtual ~Point();
    std::string toString();
    friend double getDistance(Point *point, Circle *circle);

private:
    double x;
    double y;
};


#endif //CIRCLESANDPOINTS_POINT_H
