#include "vector.h"

Vector::Vector():
    x(0), y(0)
{
}

Vector::Vector(int x_, int y_):
    x(x_), y(y_)
{
}

Vector::Vector(const Vector &vec):
    x(vec.x), y(vec.y)
{
}

Vector Vector::operator +(const Vector &vec) const
{
    return Vector(this->x + vec.x, this->y + vec.y);
}

Vector Vector::operator -(const Vector &vec) const
{
    return Vector(this->x - vec.x, this->y - vec.y);
}

Vector Vector::operator *(float num) const
{
    return Vector(this->x * num, this->y * num);
}

Vector Vector::operator /(float num) const
{
    return Vector(this->x / num, this->y / num);
}

Vector Vector::operator -()
{
    return Vector(this->x * -1, this->y * -1);
}

void Vector::operator =(const Vector &vec)
{
    this->x = vec.x;
    this->y = vec.y;
}

void Vector::operator +=(const Vector &vec)
{
    this->x += vec.x;
    this->y += vec.y;
}

void Vector::operator -=(const Vector &vec)
{
    this->x -= vec.x;
    this->y -= vec.y;
}

void Vector::operator *=(float num)
{
    this->x *= num;
    this->y *= num;
}

void Vector::operator /=(float num)
{
    this->x /= num;
    this->y /= num;
}

bool Vector::operator ==(const Vector &vec) const
{
    Vector v = (&this) - vec;
    if (v.abs() < EPSILON)
    {
        return true;
    }
    else
    {
        return false;
    }
}

float Vector::operator *(const Vector &vec) const
{
    return Vector(this->x*vec.x + this->y*vec.y);
}

float Vector::abs() const
{
    return sqrt(this->x*this->x + this->y*this->y);
}

ostream &Vector::operator <<(ostream &stream, Vector &vec)
{
    stream << vec.getX() << ", " << vec.getY();
    return stream;
}
