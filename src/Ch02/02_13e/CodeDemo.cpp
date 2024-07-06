// Complete Guide to C++ Programming Foundations
// Exercise 02_13
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main(){
    int meat = 8;
    cow_purpose a;

    a = cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
