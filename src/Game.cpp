//
// Created by Steve on 11/29/2019.
//

#include "../headers/Game.h"



void Game::start()
{
//    player->setCurrentLocation(currentRoom);
    std::cout << rooms[Game::currentRoom]->getItems().size() << std::endl;
    std::cout << "You are " + rooms[Game::currentRoom]->getDescription() << std::endl;
    std::vector<std::string> inputArray = getUserChoice();
    if (!commandHandler->validateCommandWord(inputArray))
    {
        std::cout << "Invalid command." << std::endl;
        return;
    }
    commandHandler->executeCommand(inputArray);
}

void Game::printWelcome()
{
    std::cout << "Welcome to the World of Zuul" << std::endl;
    std::cout << "A remake of a project that I did in Java but with C++" << std::endl;
}


std::map<std::string, Room*> Game::generateRooms()
{
    // std::cout << "Reading data now" << std::endl;
    CSVReader csvReader("../src/roomData.csv");
    std::vector<std::vector<std::string>> data = csvReader.getData();
    std::map<std::string, Room*> arr;
    for (auto & i : data)
    {
        arr[i[0]] = new Room(i);
    }
    return arr;
}

std::vector<std::string> Game::getUserChoice()
{
    std::string choice;
    std::cout << ">> ";
    std::getline(std::cin, choice, '\n');
    std::vector<std::string> strArr = ZuulServices::splitString(choice, ' ');
    for (auto& e : strArr) e = ZuulServices::toLower(e);
    return strArr;
}


void Game::setRoom(std::string newRoom)
{
    currentRoom = std::move(newRoom);
}

Room* Game::getCurrentRoom()
{
    return rooms[currentRoom];
}

Player* Game::getPlayer()
{
    return player;
}
