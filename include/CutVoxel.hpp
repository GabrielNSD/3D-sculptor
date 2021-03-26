#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

class CutVoxel : public FiguraGeometrica
{
    int x, y, z;

public:
    CutVoxel(int x, int y, int z);
    ~CutVoxel() {}
    void draw(Sculptor &s);
};