#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include "../headers/Player.h"
#include "../headers/Go.h"
#include "../headers/Look.h"
#include "../headers/CommandInstantiator.h"
#include "../headers/CSVReader.h"
#include "../headers/Room.h"


std::map<std::string, std::unique_ptr<Room>> rooms;


void printWelcome() {
	std::cout << "Welcome to the World of Zuul" << std::endl;
	std::cout << "A remake of a project that I did in Java but with C++" << std::endl;
}

bool validateUserChoice(std::vector<std::string> choice) {
	std::string commands[3] = { "go", "look", "take" };
	for (const std::string& command : commands) {
		if (command == choice[0]) {
			return true;
		}
	}
	return false;
}

void commandExecute(std::vector<std::string> command) {
    CommandInstantiator commandInstantiator;
    commandInstantiator.getCommand(command[0], command);
}

std::vector<std::string> splitString(std::string toSplit) {
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


void generateRooms() {
	std::cout << "Reading data now" << std::endl;
    auto *csvReader = new CSVReader("/home/forest/CLionProjects/zuul-cpp/src/roomData.csv");
    std::vector<std::vector<std::string>> data = csvReader->getData();
	
	for (int i = 0; i < data.size(); i++) {
		rooms[data[i][0]] = std::unique_ptr<Room>(new Room(data[i]));
	}
}

int main() {
	
	generateRooms();
	auto *player = new Player();
	player->setCurrentLocation("entrance");
	std::cout << rooms[player->getLocation()]->getDescription() << std::endl;
	printWelcome();
	std::string choice;
	std::cout << ">> ";
	getline(cin, choice);
    std::vector<std::string> choiceArr = splitString(choice);
    for (const std::string& ele : choiceArr) {
        cout << ele << endl;
    }
	if (validateUserChoice(choiceArr)) {
		commandExecute(choiceArr);
		choice.clear();
		main();
	}
	else {
		cout << "Invalid Command!" << endl;
		choice.clear();
		main();
	}
}
