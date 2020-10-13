#include "../headers/Inventory.h"
#include "../headers/Game.h"

void Inventory::execute(std::vector<std::string> inputArr)
{
    Game::getInstance().getPlayer()->listInventory();
}

Inventory::Inventory()
{

}
