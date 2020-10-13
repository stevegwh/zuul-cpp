#include "../headers/Look.h"
#include "../headers/Game.h"
#include "../headers/InventoryItem.h"
#include <memory>

void Look::execute(std::vector<std::string> inputArr)
{
    std::cout << "Items in room: " << std::endl;
    std::vector<std::shared_ptr<InventoryItem>> itemsInRoom = Game::getInstance().getCurrentRoom()->getItems();
    for (auto& item : itemsInRoom)
    {
        std::cout << item->getName() << std::endl;
        std::cout << item->getWeight() << std::endl;
    }
}

