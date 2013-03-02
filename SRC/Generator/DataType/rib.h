#ifndef RIB_H
#define RIB_H

#include "../../SRC/Generator/DataType/point.h"

class Rib : public virtual Point<int>
{
protected:
    int nrib;

public:
    Rib();
    Rib(int nrib_);
    Rib(int dot1, int dot2, int nrib_);
    Rib(const Rib& rib);
};

#endif // RIB_H
