//
// Created by Steve on 11/29/2019.
//

#include "../headers/Game.h"

#include <utility>


std::map<std::string, Room*> Game::rooms = Game::generateRooms();
std::string Game::currentRoom = "entrance";
bool Game::isRunning = true;

void Game::start() {
//    player->setCurrentLocation(currentRoom);
    std::cout << "You are " + rooms[Game::currentRoom]->getDescription() << std::endl;
    std::vector<std::string> inputArray = getUserChoice();
    if (commandHandler->validateCommand(inputArray)) {
        commandHandler->executeCommand(inputArray);
    }
}

void Game::printWelcome() {
    std::cout << "Welcome to the World of Zuul" << std::endl;
    std::cout << "A remake of a project that I did in Java but with C++" << std::endl;
}


std::map<std::string, Room*> Game::generateRooms() {
    std::cout << "Reading data now" << std::endl;
    CSVReader csvReader("/home/forest/CLionProjects/zuul-cpp/src/roomData.csv");
//    auto *csvReader = new CSVReader("C:/Users/Steve/CLionProjects/zuul-cpp/src/roomData.csv");
    std::vector<std::vector<std::string>> data = csvReader.getData();


    std::map<std::string, Room*> arr;
    for (auto & i : data) {
        arr[i[0]] = new Room(i);
    }
    return arr;
}

std::vector<std::string> Game::getUserChoice() {
    std::string choice;
    std::cout << ">> ";
    std::getline(std::cin, choice, '\n');
    return splitString(choice);
}

std::vector<std::string> Game::splitString(std::string toSplit) {
    std::vector<std::string> arr;
    std::string str;
    for (unsigned long i = 0; i < toSplit.length(); ++i) {
        if(isspace(toSplit[i]) && str.empty()) {
            continue;
        }
        if (isspace(toSplit[i])) {
            arr.push_back(str);
            str = "";
        } else if (i == toSplit.length() - 1) {
            str += toSplit[i];
            arr.push_back(str);
        } else {
            str += toSplit[i];
        }
    }
    return arr;
}

 void Game::setRoom(std::string newRoom) {
    Game::currentRoom = std::move(newRoom);
}

Room Game::getCurrentRoom() {
    return *rooms[currentRoom];
}
