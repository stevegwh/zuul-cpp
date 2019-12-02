#include "../headers/Game.h"

int main() {
    Game game;
    game.printWelcome();
    while (Game::isRunning) {
        game.start();
    }
	std::cout << "Thanks for playing" << std::endl;
    return 0;
}
