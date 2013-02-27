#include "vector3d.h"

Vector3D::Vector3D():
    x(0), y(0), z(0)
{
}

Vector3D::Vector3D(float x_, float y_):
    x(x_), y(y_), z(0)
{
}

Vector3D::Vector3D(float x_, float y_, float z_):
    x(x_), y(y_), z(z_)
{
}

Vector3D::Vector3D(const Vector3D &vec):
    x(vec.x), y(vec.y), z(vec.z)
{
}

Vector3D Vector3D::operator +(const Vector3D &vec) const
{
    return Vector3D(this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

Vector3D Vector3D::operator -(const Vector3D &vec) const
{
    return Vector3D(this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

Vector3D Vector3D::operator *(float num) const
{
    return Vector3D(this->x * num, this->y * num, this->z * num);
}

Vector3D Vector3D::operator /(float num) const
{
    return Vector3D(this->x / num, this->y / num, this->z / num);
}

Vector3D Vector3D::operator -()
{
    return Vector3D(-this->x, -this->y, -this->z);
}

void Vector3D::operator =(const Vector3D &vec)
{
    this->x = vec.x;
    this->y = vec.y;
    this->z = vec.z;
}

void Vector3D::operator +=(const Vector3D &vec)
{
    this->x += vec.x;
    this->y += vec.y;
    this->z += vec.z;
}

void Vector3D::operator -=(const Vector3D &vec)
{
    this->x -= vec.x;
    this->y -= vec.y;
    this->z -= vec.z;
}

void Vector3D::operator *=(float num)
{
    this->x *= num;
    this->y *= num;
    this->z *= num;
}

void Vector3D::operator /=(float num)
{
    this->x /= num;
    this->y /= num;
    this->z /= num;
}

bool Vector3D::operator ==(const Vector3D &vec) const
{
    Vector3D v = (&this) - vec;
    if (v.abs() < EPSILON)
    {
        true;
    }
    else
    {
        false;
    }
}

float Vector3D::operator *(const Vector3D &vec) const
{
    return this->x*vec.x + this->y*vec.y + this->z*vec.z;
}

float Vector3D::abs() const
{
    return sqrt(this->x*this->x + this->y*this->y + this->z*this->z);
}

ostream &Vector3D::operator <<(ostream &stream, Vector3D &vec)
{
    stream << vec.getX() << ", " << vec.getY() << ", " << vec.getZ();
    return stream;
}
