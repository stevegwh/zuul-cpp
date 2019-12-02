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
    static std::string currentRoom;
    CommandHandler *commandHandler = new CommandHandler();
//    std::map<std::string, std::unique_ptr<Room>> rooms;
    static std::map<std::string, Room*> rooms;
    Player *player = new Player();
    static std::map<std::string, Room*> generateRooms();
    std::vector<std::string> getUserChoice();
public:
    static bool isRunning;
    static void setRoom(std::string newRoom);
    static Room getCurrentRoom();
    void printWelcome();
    void start();
    Game() {
//        generateRooms();
//        std::cout << rooms[player->getLocation()]->getDescription() << std::endl;
    }

    vector<std::string> splitString(string toSplit);

};


#endif //ZUUL_CPP_GAME_H
