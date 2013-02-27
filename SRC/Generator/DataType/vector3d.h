#ifndef VECTOR3D_H
#define VECTOR3D_H

#include "../../SRC/Generator/DataType/point3d.h"
#include <iostream>
#include <math.h>

#define EPSILON 0.000001

class Vector3D: public virtual Point3D
{
public:
    Vector3D();
    Vector3D(float x_, float y_);
    Vector3D(float x_, float y_, float z_);
    Vector3D(const Vector3D& vec);

    Vector3D operator + (const Vector3D& vec) const;
    Vector3D operator - (const Vector3D& vec) const;
    Vector3D operator * (float num) const;
    Vector3D operator / (float num) const;

    Vector3D operator - ();

    void operator = (const Vector3D& vec);

    void operator += (const Vector3D& vec);
    void operator -= (const Vector3D& vec);
    void operator *= (float num);
    void operator /= (float num);

    bool operator == (const Vector3D& vec) const;

    float operator * (const Vector3D& vec) const;

    float abs () const;

    friend std::ostream& operator << (std::ostream& stream, Vector3D& vec);

    float getX () {return this->x;}
    float getY () {return this->y;}
    float getZ () {return this->z;}
};

#endif // VECTOR3D_H
