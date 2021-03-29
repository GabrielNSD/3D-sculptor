#pragma once
#include "Sculptor.hpp"
#include "FiguraGeometrica.hpp"

class CutBox : public FiguraGeometrica
{
    int x0, x1, y0, y1, z0, z1;

public:
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    ~CutBox() {}
    void draw(Sculptor &s);
};