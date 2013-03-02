#ifndef TRIANGULARFACE_H
#define TRIANGULARFACE_H

#include "../../SRC/Generator/DataType/point3d.h"

class TriangularFace : public virtual Point3D<int>
{
protected:
    int nface;

public:
    TriangularFace();
    TriangularFace(int nface_);
    TriangularFace(int dot1, int dot2, int dot3, int nface_);
    TriangularFace(const TriangularFace& tface);

    ~TriangularFace();
};

#endif // TRIANGULARFACE_H
