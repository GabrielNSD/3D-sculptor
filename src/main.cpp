#include <iostream>
#include "Sculptor.hpp"

int main() {
    Sculptor teste(10,10,10);
    teste.setColor(1,1,1,0.7); //branco
    teste.putVoxel(0,0,0);
    teste.setColor(0,1,1,0.7); //ciano
    teste.putVoxel(0,1,0);
    teste.setColor(0,1,0,0.7); //verde
    teste.putVoxel(0,0,1);
    teste.setColor(1,0,0,0.8); //vermelho
    teste.putBox(1,6,1,6,1,6);
    teste.cutBox(1,2,1,2,1,2);
    teste.writeOFF((char*)"teste.off");
}