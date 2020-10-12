#include "../headers/Look.h"
#include "../headers/Game.h"

void Look::execute(std::vector<std::string> inputArr)
{
    std::cout << "Items in room: " << std::endl;
    std::vector<std::string> itemsInRoom = Game::getCurrentRoom().getItems();
    for (auto& item : itemsInRoom)
    {
        std::cout << item << std::endl;

    }

}

