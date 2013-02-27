#ifndef POINT_H
#define POINT_H

class Point
{
protected:
    float x;
    float y;

public:
    Point();
    Point(int x_, int y_);
    Point(const Point& p);
};

#endif // POINT_H
