// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto score = 8;
    auto total_points = 12345678901;
    auto player_height = 6.2f;
    auto game_duration = 90.0;
    auto is_active = true;
    auto initial = 'P';
    auto game_title = "Soccer Champions";

    std::cout << "The type of score is " << typeid(score).name() << std::endl;
    std::cout << "The type of total_points is " << typeid(total_points).name() << std::endl;
    std::cout << "The type of player_height is " << typeid(player_height).name() << std::endl;
    std::cout << "The type of game_duration is " << typeid(game_duration).name() << std::endl;
    std::cout << "The type of is_active is " << typeid(is_active).name() << std::endl;
    std::cout << "The type of initial is " << typeid(initial).name() << std::endl;
    std::cout << "The type of game_title is " << typeid(game_title).name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
