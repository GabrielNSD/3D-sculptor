#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

class PutVoxel : public FiguraGeometrica
{
    int x, y, z;

public:
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    ~PutVoxel() {}
    void draw(Sculptor &s);
};