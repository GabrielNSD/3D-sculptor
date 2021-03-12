#include <iostream>
#include "Sculptor.hpp"

int main() {
    Sculptor teste(100,100,100);
    teste.setColor(1,1,1,0.7); //branco
    teste.putVoxel(0,0,0);
    teste.putVoxel(99,0,0);
    teste.putVoxel(20,99,20);
    teste.putVoxel(0,0,99);
    //teste.putVoxel(0,0,0);
    teste.setColor(0,1,1,0.7); //ciano
    teste.putVoxel(0,1,0);
    teste.setColor(0,1,0,0.7); //verde
    teste.putVoxel(0,0,1);
    teste.setColor(1,0,0,0.8); //vermelho
    //teste.putBox(1,4,1,4,1,4);
    //teste.cutBox(1,2,1,2,1,2);
    //teste.setColor(1,0,0,0.8); //vermelho
    teste.putSphere(50,50,50, 20);
    teste.cutSphere(30,30,30,25);
    teste.writeOFF((char*)"teste.off");
}