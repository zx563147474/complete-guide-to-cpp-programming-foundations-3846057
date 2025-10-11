// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> checkPoints = {"Start", "Forest", "Castle"};
    checkPoints.push_back("Cave");
    checkPoints.push_back("Finsh");
    std::cout << "The game has " << checkPoints.size() << " check oints"<< std::endl;


    std::cout << "The check point at index 2 is " << checkPoints[2] << std::endl;

    checkPoints[2] = "Dark Castle";
    std::cout << "The check point at index 2 is " << checkPoints[2] << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
