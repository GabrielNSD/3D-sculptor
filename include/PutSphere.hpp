#pragma once
#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

class PutSphere : public FiguraGeometrica
{
    int xcenter;
    int ycenter;
    int zcenter;
    int radius;

public:
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    ~PutSphere() {}
    void draw(Sculptor &s);
};