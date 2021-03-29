#include "CutSphere.hpp"
#include <cmath>

#include "FiguraGeometrica.hpp"
#include "Sculptor.hpp"

CutSphere::CutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
}

void CutSphere::draw(Sculptor &s)
{
    for (int x = (xcenter - radius); x < (xcenter + radius); x++)
    {
        for (int y = (ycenter - radius); y < (ycenter + radius); y++)
        {
            for (int z = (zcenter - radius); z < (zcenter + radius); z++)
            {
                if ((pow((x - xcenter), 2) + pow((y - ycenter), 2) + pow((z - zcenter), 2)) <= (pow(radius, 2)))
                {
                    s.cutVoxel(x, y, z);
                }
            }
        }
    }
}