// Complete Guide to C++ Programming Foundations
// Exercise 07_08
// Operator Overload, by Eduardo Corpeño 

#include "inventory.hpp"
#include <iostream>

int main(){
    Inventory myInventory(5); // Create an inventory with capacity of 5 items

    myInventory += "Health Potion"; // Add items
    myInventory += "Mana Potion";
    myInventory += "Sword";
    myInventory += "Shield";
    myInventory += "Bow";

    myInventory.displayInventory(); // Display current inventory

    myInventory -= "Mana Potion"; // Remove an item
    myInventory.displayInventory();

    std::cout << "The inventory contains: " << myInventory.getItemCount() << " items." << std::endl; // Access item by index

    std::cout << "Item at index 2: " << myInventory[2] << std::endl; // Access item by index

    // Try to add another item when inventory is full
    myInventory += "Arrow";

    // Display final state of inventory
    myInventory.displayInventory();

    std::cout << std::endl << std::endl;
    return 0;
}
