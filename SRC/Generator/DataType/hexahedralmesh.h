#ifndef HEXAHEDRALMESH_H
#define HEXAHEDRALMESH_H

#include <vector>

#include "../../SRC/Generator/DataType/dot.h"
#include "../../SRC/Generator/DataType/rib.h"
#include "../../SRC/Generator/DataType/quadricface.h"

class HexahedralMesh
{
protected:
    static int dotArrSize;
    std::vector<Dot> dot;
    static int ribArrSize;
    std::vector<Rib> rib;
    static int tfaceArrSize;
    std::vector<QuadricFace> qface;

public:
    HexahedralMesh();

    ~HexahedralMesh();
};

#endif // HEXAHEDRALMESH_H
