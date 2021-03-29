#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

class CutEllipsoid : public FiguraGeometrica
{

    int xcenter;
    int ycenter;
    int zcenter;
    int rx;
    int ry;
    int rz;

public:
    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    ~CutEllipsoid() {}
    void draw(Sculptor &s);
};