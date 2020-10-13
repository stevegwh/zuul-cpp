#ifndef ZUUL_CPP_INVENTORYITEM_H
#define ZUUL_CPP_INVENTORYITEM_H

#include <string>

class InventoryItem
{
private:
    std::string itemName;
    int itemWeight;
public:

    std::string getName();
    int getWeight();

    InventoryItem(const std::string& itemName, int itemWeight) :
       itemName(itemName), itemWeight(itemWeight)
    {}
};

#endif // ZUUL_CPPINVENTORYITEM_H
