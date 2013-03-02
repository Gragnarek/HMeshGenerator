#ifndef DOT_H
#define DOT_H

#include "../../SRC/Generator/DataType/point3d.h"

class Dot : public virtual Point3D<float>
{
protected:
    int ndot;

public:
    Dot();
    Dot(int ndot_);
    Dot(float x_, float y_, int ndot_);
    Dot(float x_, float y_, float z_, int ndot_);
    Dot(const Dot& dot);
};

#endif // DOT_H
