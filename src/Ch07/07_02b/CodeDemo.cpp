// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Inventory{
public:
    Inventory(): capacity(10)
    {
        items = new std::vector<std::string>();
    }
    Inventory(int capacity_i): capacity(capacity_i)
    {
        items = new std::vector<std::string>();
    }

    ~Inventory()
    {
        delete items;
    }


    void addItem(const std::string& item)
    {
        if (items->size() < capacity)
        {
            items->push_back(item);
        }
        else
        {
            std::cout << "inventory is full, cannot add " << item << std::endl;
        }
    }
    void removeItem(const std::string& item)
    {
        auto it = std::find(items->begin(), items->end(), item);
        if (it != items->end())
        {
            items->erase(it);
        }
        else
        {
            std::cout << "item " << item << "not in inventory"  << std::endl;
        }
    }

    std::string getItem(int index) const
    {
        if (index >= 0 && index < items->size())
        {
            return (*items)[index];
        }
        else
        {
            return "Index out of bound";
        }
    }

    int getItemCount() const
    {
        return items->size();
    }

    void displayInventory() const
    {
        std::cout << "Inventory: [ ";
        for (size_t i = 0; i < items->size(); i++)
        {
            std::cout << (*items)[i];
            if (i < items->size() - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << " ]" << std::endl;
    }

    private:
    std::vector<std::string> *items;
    int capacity;



};

int main(){
    
    Inventory myInventory(5);
    myInventory.addItem("health");
    myInventory.addItem("mana");
    myInventory.addItem("sword");
    myInventory.addItem("shield");
    myInventory.addItem("bow");

    myInventory.displayInventory();

    myInventory.addItem("arrow");

    myInventory.removeItem("mana");
    std::cout << "inventory now has " << myInventory.getItemCount() << std::endl;

    std::cout << "item at index 2: " << myInventory.getItem(2) << std::endl;

    myInventory.addItem("arrow");
    myInventory.displayInventory();

    std::cout << std::endl << std::endl;
    return 0;
}
