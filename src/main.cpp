#include <iostream>
#include <cmath>
#include "Sculptor.hpp"
#include "PutVoxel.hpp"

#include "CutVoxel.hpp"
#include "PutBox.hpp"
#include "CutBox.hpp"
#include "PutSphere.hpp"
#include "CutSphere.hpp"
#include "PutEllipsoid.hpp"
#include "CutEllipsoid.hpp"

int main()
{
    /*     Sculptor teste(200, 200, 200);

    teste.setColor(255, 229, 50, 1);

    //parte iferior da alça
    teste.putSphere(80, 99, 72, 11);
    teste.putSphere(80, 100, 72, 11);
    teste.putSphere(80, 101, 72, 11);
    teste.cutSphere(80, 99, 77, 8);
    teste.cutSphere(80, 100, 77, 8);
    teste.cutSphere(80, 101, 77, 8);
    teste.cutSphere(80, 102, 77, 8);

    teste.putSphere(120, 100, 72, 11);
    teste.cutSphere(120, 100, 77, 8);

    //parte superior da alça
    teste.putSphere(77, 100, 72, 8);
    teste.putSphere(77, 99, 72, 8);
    teste.putSphere(77, 101, 72, 8);
    teste.cutSphere(77, 100, 72, 5);
    teste.cutSphere(77, 98, 72, 5);
    teste.cutSphere(77, 99, 72, 5);
    teste.cutSphere(77, 101, 72, 5);
    teste.cutSphere(77, 102, 72, 5);

    teste.putSphere(123, 100, 72, 8);
    teste.putSphere(123, 99, 72, 8);
    teste.putSphere(123, 101, 72, 8);
    teste.cutSphere(123, 100, 72, 5);
    teste.cutSphere(123, 98, 72, 5);
    teste.cutSphere(123, 99, 72, 5);
    teste.cutSphere(123, 101, 72, 5);

    //fatiar a alça
    teste.cutBox(0, 199, 0, 98, 0, 100);
    teste.cutBox(0, 199, 102, 199, 0, 100);


    //cone da base
    teste.setColor(40,90,255,0.5);
    teste.putEllipsoid(100,100,20,16,16,45);
    teste.cutEllipsoid(100, 100, 20, 15, 15, 45);
    teste.cutBox(86,115,86,115,20,60);
    teste.setColor(255, 229, 50, 1);
    teste.putEllipsoid(100, 100, 20, 15, 15, 45);
    teste.cutEllipsoid(100, 100, 20, 13, 13, 40);

    //parte superior da taça 
    teste.putSphere(100, 100, 80, 25);
    teste.cutBox(75, 126, 75, 126, 80, 106);
    teste.cutSphere(100, 100, 80, 21);
    teste.cutBox(0, 199, 0, 199, 0, 20);

    teste.setColor(255,54,54,0.5);
    teste.putEllipsoid(100,75,75,3,3,4);
    teste.putEllipsoid(100,125,75,3,3,4);


    //base
    teste.setColor(0, 0, 0, 1);
    teste.putBox(70, 130, 70, 130, 0, 20);
    teste.cutBox(71, 129, 71, 129, 1, 19);
    //plaquinha da base
    teste.setColor(255, 255, 0, 1);
    teste.putBox(90, 110, 130, 132, 5, 15);

    teste.writeOFF((char *)"trofeu.off"); */

    Sculptor *s;
    s = new Sculptor(100, 100, 100);
    FiguraGeometrica *sfig[10];
    //vector<FiguraGeometrica*> figuras;
    //PutVoxel v;

    //s = new Sculptor(5,5,5);

    sfig[0] = new PutVoxel(1, 1, 1, 1, 2, 3, 1);
    sfig[1] = new PutVoxel(50, 50, 50, 1, 1, 1, 1);
    sfig[2] = new PutBox(2, 15, 2, 15, 2, 15, 1, 1, 1, 1);
    sfig[3] = new CutVoxel(2, 2, 2);
    //sfig[4] = new PutSphere(50, 50, 50, 15, 1, 1, 1, 1);
    //sfig[5] = new CutSphere(46, 46, 46, 10);
    sfig[4] = new PutEllipsoid(50,50,50,20,15,10,255,1,1,1);
    sfig[5] = new CutEllipsoid(40,40,40,20,15,10);

    sfig[0]->draw(*s);
    sfig[1]->draw(*s);
    sfig[2]->draw(*s);
    sfig[3]->draw(*s);
    sfig[4]->draw(*s);
    sfig[5]->draw(*s);

    s->writeOFF((char *)"figura.off");
}