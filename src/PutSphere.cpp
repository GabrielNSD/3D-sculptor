#include "PutSphere.hpp"
#include <cmath>

#include "Sculptor.hpp"
#include "FiguraGeometrica.hpp"

PutSphere::PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void PutSphere::draw(Sculptor &s)
{
    s.setColor(r,g,b,a);
    for (int x = (xcenter - radius); x < (xcenter + radius); x++)
    {
        for (int y = (ycenter - radius); y < (ycenter + radius); y++)
        {
            for (int z = (zcenter - radius); z < (zcenter + radius); z++)
            {
                if ((pow((x - xcenter), 2) + pow((y - ycenter), 2) + pow((z - zcenter), 2)) <= (pow(radius, 2)))
                {
                    s.putVoxel(x, y, z);
                }
            }
        }
    }
}