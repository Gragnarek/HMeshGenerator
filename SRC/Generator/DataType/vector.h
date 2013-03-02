#ifndef VECTOR_H
#define VECTOR_H

#include "../../SRC/Generator/DataType/point.h"
#include <iostream>
#include <math.h>

namespace VECTOR
{
    static const float EPSILON = 0.000001;
}

class Vector : public virtual Point<float>
{
public:
    Vector();
    Vector(float x_, float y_);
    Vector(const Vector& vec);

    Vector operator + (const Vector& vec) const;
    Vector operator - (const Vector& vec) const;
    Vector operator * (float num) const;
    Vector operator / (float num) const;

    Vector operator - ();

    void operator = (const Vector& vec);

    void operator += (const Vector& vec);
    void operator -= (const Vector& vec);
    void operator *= (float num);
    void operator /= (float num);

    bool operator == (const Vector& vec) const;

    float operator * (const Vector& vec) const;

    float abs () const;

    friend std::ostream& operator << (std::ostream& stream, Vector& vec);

    float getX () {return x;}
    float getY () {return y;}

    ~Vector();
};

#endif // VECTOR_H
