#include <iostream>
#include "Sculptor.hpp"

int main() {
    Sculptor teste(2,2,2);
    teste.setColor(1,1,1,0.7);
    teste.putVoxel(0,0,0);
    teste.writeOFF((char*)"teste.off");

    //std::cout << "Hello Easy C++ project!" << std::endl;
}