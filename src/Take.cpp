#include "../headers/Take.h"
#include "../headers/Game.h"
#include "../headers/Room.h"
#include "../headers/InventoryItem.h"
#include <vector>
#include <string>


Take::Take()
{

}

void Take::execute(std::vector<std::string> inputArr)
{

    std::vector<std::shared_ptr<InventoryItem>> items = Game::getInstance().getCurrentRoom()->getItems();

    for (auto& item : items)
    {
        if (item->getName() == inputArr[1])
        {
            std::cout << "You picked up the " << item->getName() << std::endl;
            Game::getInstance().getCurrentRoom()->removeItem(item);
            Game::getInstance().getPlayer()->addItemToInventory(item);
            return;
        }
    }

    std::cout << "That item isn't in the room" << std::endl;
}
