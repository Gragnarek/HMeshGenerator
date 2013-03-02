#ifndef TETRAHEDRALMESH_H
#define TETRAHEDRALMESH_H

#include <vector>
#include <string>

#include "../../SRC/Generator/DataType/dot.h"
#include "../../SRC/Generator/DataType/rib.h"
#include "../../SRC/Generator/DataType/triangularface.h"

class TetrahedralMesh
{
protected:
    static int dotArrSize;
    std::vector<Dot> dot;
    static int ribArrSize;
    std::vector<Rib> rib;
    static int tfaceArrSize;
    std::vector<TriangularFace> tface;

public:
    TetrahedralMesh();

    static TetrahedralMesh JsonParser(const std::wstring str);
    static std::wstring JsonCoder(const TetrahedralMesh& tmesh);

    ~TetrahedralMesh();
};

#endif // TETRAHEDRALMESH_H
