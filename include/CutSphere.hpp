#pragma once

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

class CutSphere : public FiguraGeometrica
{
    int xcenter;
    int ycenter;
    int zcenter;
    int radius;

public:
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    ~CutSphere() {}
    void draw(Sculptor &S);
};