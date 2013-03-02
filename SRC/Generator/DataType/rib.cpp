#include "rib.h"

Rib::Rib():
    nrib(-1)
{
}

Rib::Rib(int nrib_):
    nrib(nrib_)
{
}

Rib::Rib(int dot1, int dot2, int nrib_):
    Point(dot1, dot2), nrib(nrib_)
{
}

Rib::Rib(const Rib &rib):
    Point((Point)rib), nrib(rib.nrib)
{
}
