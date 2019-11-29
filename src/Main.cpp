#include "../headers/Game.h"


int main() {
    Game game;
    game.printWelcome();
    while (1) {
        game.start();
    }
}
