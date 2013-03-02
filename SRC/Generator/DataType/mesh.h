#ifndef MESH_H
#define MESH_H

#include "../../SRC/Generator/DataType/hexahedralmesh.h"
#include "../../SRC/Generator/DataType/tetrahedralmesh.h"

class Mesh
{
protected:
    HexahedralMesh HMesh;
    TetrahedralMesh TMesh;

public:
    Mesh();

    ~Mesh();
};

#endif // MESH_H
