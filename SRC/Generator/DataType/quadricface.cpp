#include "quadricface.h"

QuadricFace::QuadricFace():
    x(0), y(0), z(0), n(0), nface(-1)
{
}

QuadricFace::QuadricFace(int nface_):
    x(0), y(0), z(0), n(0), nface(nface_)
{
}

QuadricFace::QuadricFace(int x_, int y_, int z_, int n_, int nface_):
    x(x_), y(y_), z(z_), n(n_), nface(nface_)
{
}

QuadricFace::QuadricFace(const QuadricFace &qface):
    x(qface.x), y(qface.y), z(qface.z), n(qface.n), nface(qface.nface)
{
}

QuadricFace::~QuadricFace()
{
}
