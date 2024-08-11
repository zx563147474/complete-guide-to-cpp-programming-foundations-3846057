// Complete Guide to C++ Programming Foundations
// Exercise 03_04
// Increment and Decrement Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int player_score = 10;
    int player_lives = 3;

    std::cout << "Initial Score: " << player_score << std::endl;
    std::cout << "Initial Lives: " << player_lives << std::endl;

    // Postfix increment
    std::cout << "Score after postfix increment: " << player_score++ << std::endl;

    // Prefix increment
    std::cout << "Score after prefix increment: " << ++player_score << std::endl;

    // Postfix decrement
    std::cout << "Lives after postfix decrement: " << player_lives-- << std::endl;

    // Prefix decrement
    std::cout << "Lives after prefix decrement: " << --player_lives << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}