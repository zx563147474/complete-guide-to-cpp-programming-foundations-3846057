// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float sprite_x;
    int32_t screen_x;
    uint32_t screen_id;

    sprite_x = -123.45f;
    screen_x = sprite_x;
    screen_id = screen_x;

    std::cout << " Sprite X: " << sprite_x << std::endl;
    std::cout << " Screen X: " << screen_x << std::endl;
    std::cout << "Screen ID: " << (int32_t) screen_id << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
