// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;

    std::cout << "Hi There!" << std::endl;
    std::cout << "Enter your name: " << std::endl;

    std::cin >> name;
    std::cout << "Nice to meet you, " << name << "!" << std::endl; 
    std::cout << std::endl << std::endl;
    return 0;
}