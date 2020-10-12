#include "../headers/Go.h"

#include <iostream>
#include <algorithm>
#include <cctype>
#include "../headers/Game.h"

void Go::execute(std::vector<std::string> inputArr)
{
    std::string toCheck = inputArr[1];

    if (!validate(toCheck))
    {
        std::cout << "Invalid direction." << std::endl;
        return;
    }
    if (Game::getCurrentRoom().hasExit(toCheck)) {
        std::cout << "You went " + toCheck << std::endl;
        Game::setRoom(Game::getCurrentRoom().getExit(toCheck));
    } else {
        std::cout << "You can't go that way" << std::endl;
    }
}

bool Go::validate(std::string direction)
{
    for(int i=0; i < (int)directions.size(); ++i)
    {
        if (directions[i] == direction) return true;
    }
    return false;
}
