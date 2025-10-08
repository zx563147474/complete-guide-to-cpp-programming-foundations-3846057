// Complete Guide to C++ Programming Foundations
// Exercise 00_03 dsa test
// Using the Exercise Files in GitHub Codespaces, by Eduardo Corpeño 

#include <iostream>

int main(){
    float num_1, num_2, result;

    std::cout << "Enter number 1: " << std::flush;
    std::cin >> num_1;
    std::cout << "Enter number 2: " << std::flush;
    std::cin >> num_2;
    
    result = num_1 + num_2;
    
    std::cout << "The result of the addition is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
