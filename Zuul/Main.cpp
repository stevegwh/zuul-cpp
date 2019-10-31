#include <iostream>
#include <string>
#include "Player.h"

using namespace std;
void printWelcome() {
	cout << "Welcome to the World of Zuul" << endl;
	cout << "A remake of a project that I did in Java but with C++" << endl;
}

bool validateUserChoice(string choice) {
	string commands[3] = { "go", "look", "take" };
	int size = sizeof(commands)/sizeof(commands[0]);
	for (const string& command : commands) {
		if (command.compare(choice)) {
			return true;
		}
	}
	return false;
}

void go() {
	cout << "You went somewhere" << endl;
}

void look() {
	cout << "You looked somewhere" << endl;
}
void commandExecute(string command) {
	if (command.compare("go") == 0) {
		go();
	}
	else if (command.compare("look") == 0) {
		look();
	}
}

int main() {
	Player player;
	player.setCurrentLocation("Manchester");
	cout << player.getLocation() << endl;
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