#include "triangularface.h"

TriangularFace::TriangularFace():
    nface(-1)
{
}

TriangularFace::TriangularFace(int nface_):
    nface(nface_)
{
}

TriangularFace::TriangularFace(int dot1, int dot2, int dot3, int nface_):
    Point3D(dot1, dot2, dot3), nface(nface_)
{
}

TriangularFace::TriangularFace(const TriangularFace &tface):
    Point3D((Point3D)tface), nface(tface.nface)
{
}
