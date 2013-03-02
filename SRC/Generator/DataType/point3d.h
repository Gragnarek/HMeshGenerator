#ifndef POINT3D_H
#define POINT3D_H

template<class T>
class Point3D
{
protected:
    T x;
    T y;
    T z;

public:
    Point3D();
    Point3D(T x_, T y_);
    Point3D(T x_, T y_, T z_);
    Point3D(const Point3D<T>& p);
};

template<class T>
Point3D<T>::Point3D():
    x(0), y(0), z(0)
{
}

template<class T>
Point3D<T>::Point3D(T x_, T y_):
    x(x_), y(y_), z(0)
{
}

template<class T>
Point3D<T>::Point3D(T x_, T y_, T z_):
    x(x_), y(y_), z(z_)
{
}

template<class T>
Point3D<T>::Point3D(const Point3D<T> &p):
    x(p.x), y(p.y), z(p.z)
{
}

#endif // POINT3D_H
