//
// Created by lukasz on 2016-10-22.
//

#ifndef CIRCLESANDPOINTS_POINT_H
#define CIRCLESANDPOINTS_POINT_H


class Point {
    friend class Circle;
public:
    Point(double x, double y);
    virtual ~Point();

private:
    double x;
    double y;
};


#endif //CIRCLESANDPOINTS_POINT_H
