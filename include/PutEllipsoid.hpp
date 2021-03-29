#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

class PutEllipsoid : public FiguraGeometrica
{

    int xcenter;
    int ycenter;
    int zcenter;
    int rx;
    int ry;
    int rz;

public:
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    ~PutEllipsoid() {}
    void draw(Sculptor &s);
};