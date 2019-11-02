#include <iostream>
#include <string>
#include "../headers/Player.h"
#include "../headers/Go.h"
#include "../headers/Look.h"
#include "../headers/CommandInstantiator.h"

using namespace std;
void printWelcome() {
	cout << "Welcome to the World of Zuul" << endl;
	cout << "A remake of a project that I did in Java but with C++" << endl;
}

bool validateUserChoice(string choice) {
	string commands[3] = { "go", "look", "take" };
	for (const string& command : commands) {
		if (command == choice) {
			return true;
		}
	}
	return false;
}

void commandExecute(string command) {
    CommandInstantiator commandInstantiator;
    commandInstantiator.getCommand(command);
}

int main() {
	auto *player = new Player();
	player->setCurrentLocation("Manchester");
	cout << player->getLocation() << endl;
	printWelcome();
	string choice;
	cout << ">> ";
	getline(cin, choice);
	if (validateUserChoice(choice)) {
		commandExecute(choice);
		choice.clear();
		main();
	}
	else {
		cout << "Invalid Command!" << endl;
		choice.clear();
		main();
	}
}