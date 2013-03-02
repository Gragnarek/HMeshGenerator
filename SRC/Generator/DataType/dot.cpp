#include "dot.h"

Dot::Dot():
    ndot(-1)
{
}

Dot::Dot(int ndot_):
    ndot(ndot_)
{
}

Dot::Dot(float x_, float y_, int ndot_):
    Point3D(x_, y_, 0.0), ndot(ndot_)
{
}

Dot::Dot(float x_, float y_, float z_, int ndot_):
    Point3D(x_, y_, z_), ndot(ndot_)
{
}

Dot::Dot(const Dot &dot):
    Point3D((Point3D)dot), ndot(dot.ndot)
{
}
