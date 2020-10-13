#include "../headers/Player.h"
#include <iostream>


void Player::setCurrentLocation(std::string location)
{
	Player::currentLocation = location;
}

std::string Player::getLocation()
{
	return Player::currentLocation;
}

void Player::addItemToInventory(std::shared_ptr<InventoryItem> itemToAdd)
{
    inventory.push_back(itemToAdd);
    currentWeight += itemToAdd->getWeight();
}

void Player::listInventory()
{
    std::cout << "Inventory:" << std::endl;
    for (auto& item : inventory)
    {
        std::cout << "Item Name: " << item->getName() << std::endl;
        std::cout << "Item Weight: " << item->getWeight() << std::endl;
    }

    std::cout << "Current/Total Weight: " << currentWeight << "/" << maxInventoryWeight << std::endl;
}
