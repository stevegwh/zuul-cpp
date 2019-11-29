#include "../headers/Go.h"
#include "../headers/Game.h"
#include <iostream>
#include <vector>
#include <string>

void Go::execute(std::vector<std::string> inputArr)
{
	std::cout << "You went " + inputArr[1] << std::endl;
//	Game::setRoom(Game::getCurrentRoom().getExit(inputArr[0]));
}
