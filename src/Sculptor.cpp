#include "Sculptor.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Voxel ***v;

Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    nx = _nx;
    ny = _ny;
    nz = _nz;
    int i, j, k;

    //alocando memória para o espaço 3d
    v = new Voxel **[nx];
    for (i = 0; i < _ny; i++)
    {
        v[i] = new Voxel *[ny];
        for (j = 0; j < _nz; j++)
        {
            v[i][j] = new Voxel [nz];
        }
    }

    for (i = 0; i < _nx; i++)
    {
        for (j = 0; j < _ny; j++)
        {
            for (k = 0; k < _nz; k++)
            {
                v[i][j][k].isOn = false;
            }
        }
    }
}

Sculptor::~Sculptor()
{
    delete [] **v;
    delete [] *v;
    delete [] v;
    cout << "destrutor rodou" << endl;
}

void Sculptor::setColor(float r, float g, float b, float alpha)
{
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = alpha;
}
