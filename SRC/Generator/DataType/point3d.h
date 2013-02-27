#ifndef POINT3D_H
#define POINT3D_H

class Point3D
{
protected:
    float x;
    float y;
    float z;

public:
    Point3D();
    Point3D(float x_, float y_);
    Point3D(float x_, float y_, float z_);
    Point3D(const Point3D& p);
};

#endif // POINT3D_H
