
#include "../headers/Quit.h"
#include "../headers/Game.h"

void Quit::execute(std::vector< std::string > inputArr)
{
	Game::getInstance().isRunning = false;

}
