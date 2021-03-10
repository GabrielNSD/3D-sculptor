#include <iostream>
#include "Sculptor.hpp"

int main() {
    Sculptor teste(3,3,3);
    teste.setColor(1,1,1,0.7);
    teste.putVoxel(0,0,0);
    teste.setColor(0,1,1,0.7);
    teste.putVoxel(2,0,0);
    teste.writeOFF((char*)"teste.off");

    //std::cout << "Hello Easy C++ project!" << std::endl;
}