#include "../headers/Game.h"

int main() {
    Game::getInstance().printWelcome();
    while (Game::getInstance().isRunning) {
        Game::getInstance().start();
    }
	std::cout << "Thanks for playing" << std::endl;
    return 0;
}
