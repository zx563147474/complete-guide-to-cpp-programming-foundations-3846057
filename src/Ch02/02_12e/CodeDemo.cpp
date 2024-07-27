// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, controls, texture};

int main(){
    int asset_value = 8;
    asset_type game_asset;

    game_asset = asset_type::sound;

    std::cout << "game_asset = " << (int) game_asset << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
