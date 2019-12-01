#ifndef ZUUL_CPP_GAME_H
#define ZUUL_CPP_GAME_H


#include "CommandInstantiator.h"
#include "CommandHandler.h"
#include <iostream>
#include "Room.h"
#include "CSVReader.h"
#include "Player.h"

class Game
{
private:
    std::string currentRoom = "entrance";
    CommandHandler *commandHandler = new CommandHandler();
    std::map<std::string, std::unique_ptr<Room>> rooms;
    Player *player = new Player();
    void generateRooms();
    std::vector<std::string> getUserChoice();
public:
    void setRoom(std::string newRoom);
    Room getCurrentRoom();
    void printWelcome();
    void start();
    Game() {
        generateRooms();
//        std::cout << rooms[player->getLocation()]->getDescription() << std::endl;
    }

    vector<std::string> splitString(string toSplit);
};


#endif //ZUUL_CPP_GAME_H
