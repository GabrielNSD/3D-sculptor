#include "CutEllipsoid.hpp"
#include <cmath>

#include "Sculptor.hpp"
#include "FiguraGeometrica.hpp"

CutEllipsoid::CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
}

void CutEllipsoid::draw(Sculptor &s)
{
    for (int x = (xcenter - rx); x < (xcenter + rx); x++)
    {
        for (int y = (ycenter - ry); y < (ycenter + ry); y++)
        {
            for (int z = (zcenter - rz); z < (zcenter + rz); z++)
            {
                if (((pow((x - xcenter), 2) / pow(rx, 2)) + (pow((y - ycenter), 2) / pow(ry, 2)) + (pow((z - zcenter), 2) / pow(rz, 2))) <= 1)
                {
                    s.cutVoxel(x, y, z);
                }
            }
        }
    }
}