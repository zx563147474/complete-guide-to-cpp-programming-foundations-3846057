// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum asset_type {texture, sound, animation, script};
enum menu_section {background, music, sound, controls, texture};

int main(){
    int asset;

    asset = sound;

    std::cout << "asset = " << asset << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
