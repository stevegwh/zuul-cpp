#ifndef ZUUL_CPP_GAME_H
#define ZUUL_CPP_GAME_H


#include "ZuulServices.h"
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
    std::map<std::string, Room*> rooms = generateRooms();
    Player* player = new Player();
    CommandHandler *commandHandler = new CommandHandler();
    std::map<std::string, Room*> generateRooms();
    std::vector<std::string> getUserChoice();
public:
    static Game& getInstance()
    {
        static Game s;
        return s;
    }


    bool isRunning = true;
    void setRoom(std::string newRoom);
    Room* getCurrentRoom();
    Player* getPlayer();
    void printWelcome();
    void start();


};


#endif //ZUUL_CPP_GAME_H
