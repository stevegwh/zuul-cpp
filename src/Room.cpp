#include "../headers/Room.h"
#include <iostream>
#include <algorithm>

std::string Room::getDescription()
{
	return description;
}

std::string Room::getName()
{
	return name;
}

std::vector<std::shared_ptr<InventoryItem>> Room::getItems()
{
    return itemsInRoom;
}

void Room::removeItem(const std::shared_ptr<InventoryItem>& toRemove)
{
    auto position = std::find(itemsInRoom.begin(), itemsInRoom.end(), toRemove);
    if (position != itemsInRoom.end())
    {
        itemsInRoom.erase(position);
    }
}

bool Room::hasExit(const std::string& direction)
{
    return exits.find(direction) != exits.end();
}

std::string Room::getExit(const std::string& direction)
{
	return exits[direction];
}
