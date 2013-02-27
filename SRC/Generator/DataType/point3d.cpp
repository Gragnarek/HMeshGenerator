#include "point3d.h"

Point3D::Point3D():
    x(0), y(0), z(0)
{
}

Point3D::Point3D(float x_, float y_):
    x(x_), y(y_), z(0)
{
}

Point3D::Point3D(float x_, float y_, float z_):
    x(x_), y(y_), z(z_)
{
}

Point3D::Point3D(const Point3D &p):
    x(p.x), y(p.y), z(p.z)
{
}

