//
// Created by lukasz on 2016-10-22.
//

#include "Circle.h"
#include <sstream>
#include <cmath>

Circle::Circle(double x, double y, double r) {
    this->x = x;
    this->y = y;
    this->r = r;
}

Circle::~Circle() {

}

std::string Circle::toString() {
    std::ostringstream ss;
    ss << x;
    std::string s = "";
    s+=ss.str();
    std::ostringstream ss2;
    ss2 << y;
    s+=", ";
    s+= ss2.str();
    return s;
}



double getDistance(Point *point, Circle *circle) {
    double distanceWithRadius = sqrt(pow(point->x - circle->x, 2) + pow(point->y - circle->y,2));
    return distanceWithRadius - circle->r;
}
