#pragma once
#include "voxel.hpp"

/* struct Voxel
{
    float r, g, b; //Colors
    float a;
    // Transparenct
    bool isOn; // Included or not
}; */

/**
 * @brief A classe Sculptor implementa um desenhador tridimensional
 * com várias funções
 */
class Sculptor
{
protected:
    Voxel ***v;
    int nx, ny, nz;
    float r, g, b, a;

public:
    /**
     * @brief 
     * 
     * @param _nx dimensão do construtor no eixo x
     * @param _ny dimensão do construtor no eixo y
     * @param _nz dimensão do construtor no eixo z
     * 
     * @details 
     * <ul>
     *  <li> </li>
     * </ul>
     * 
     */
    Sculptor(int _nx, int _ny, int _nz);
    ~Sculptor();
    void setColor(float r, float g, float b, float alpha);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void putCylinder(int xcenter, int ycenter, int height, int radius, int base);
    void cutCylinder(int xcenter, int ycenter, int height, int radius, int base);
    void writeOFF(char *filename);
};