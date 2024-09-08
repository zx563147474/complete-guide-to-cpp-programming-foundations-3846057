// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Using Several Source Files, by Eduardo Corpeño 

#include "inventory.hpp"
#include <iostream>

int main(){
    Inventory myInventory(5); // Create an inventory with capacity of 5 items

    myInventory.addItem("Health Potion"); // Add items
    myInventory.addItem("Mana Potion");
    myInventory.addItem("Sword");
    myInventory.addItem("Shield");
    myInventory.addItem("Bow");

    myInventory.displayInventory(); // Display current inventory

    myInventory.removeItem("Mana Potion"); // Remove an item
    myInventory.displayInventory();

    std::cout << "The inventory contains: " << myInventory.getItemCount() << " items." << std::endl;

    std::cout << "Item at index 2: " << myInventory.getItem(2) << std::endl; // Access item by index

    // Try to add another item when inventory is full
    myInventory.addItem("Arrow");

    // Display final state of inventory
    myInventory.displayInventory();

    std::cout << std::endl << std::endl;
    return 0;
}
