#include "point.h"

Point::Point():
    x(0), y(0)
{
}

Point::Point(int x_, int y_):
    x(x_), y(y_)
{
}

Point::Point(const Point &p):
    x(p.x), y(p.y)
{
}
