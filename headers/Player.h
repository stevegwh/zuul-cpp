#ifndef ZUUL_CPP_PLAYER_H
#define ZUUL_CPP_PLAYER_H

#include <string>
#include <vector>
#include <InventoryItem.h>


class Player
{
private:
    std::vector<InventoryItem> inventory;
    std::string currentLocation = "London";

public:
    void setCurrentLocation(std::string location);
    std::string getLocation();
};

#endif //ZUUL_CPP_PLAYER_H
