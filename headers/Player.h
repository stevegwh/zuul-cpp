#ifndef ZUUL_CPP_PLAYER_H
#define ZUUL_CPP_PLAYER_H

#include <string>
#include <vector>
#include <memory>
#include "InventoryItem.h"


class Player
{
private:
    const int maxInventoryWeight = 10;
    int currentWeight = 0;
    std::vector<std::shared_ptr<InventoryItem>> inventory;
    std::string currentLocation = "London";

public:
    void setCurrentLocation(std::string location);
    std::string getLocation();
    void addItemToInventory(std::shared_ptr<InventoryItem> itemToAdd);
    void listInventory();
};

#endif //ZUUL_CPP_PLAYER_H
