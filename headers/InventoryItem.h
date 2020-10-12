#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <string>
class InventoryItem
{
private:
    std::string itemName;
    int itemWeight;
public:

    std::string getName();
    int getWeight();

    InventoryItem(std::string itemName, int itemWeight) :
       itemName(itemName), itemWeight(itemWeight)
    {}
};

#endif // INVENTORYITEM_H
