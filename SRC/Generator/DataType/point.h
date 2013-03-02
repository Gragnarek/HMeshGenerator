#ifndef POINT_H
#define POINT_H

template<class T>
class Point
{
protected:
    T x;
    T y;

public:
    Point();
    Point(T x_, T y_);
    Point(const Point<T>& p);

    ~Point();
};

template<class T>
Point<T>::Point():
    x(0), y(0)
{
}

template<class T>
Point<T>::Point(T x_, T y_):
    x(x_), y(y_)
{
}

template<class T>
Point<T>::Point(const Point<T> &p):
    x(p.x), y(p.y)
{
}

template<class T>
Point<T>::~Point()
{
}

#endif // POINT_H
