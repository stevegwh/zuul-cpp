#include <iostream>
#include <string>
#include <vector>
#include "../headers/Player.h"
#include "../headers/Go.h"
#include "../headers/Look.h"
#include "../headers/CommandInstantiator.h"

using namespace std;
void printWelcome() {
	cout << "Welcome to the World of Zuul" << endl;
	cout << "A remake of a project that I did in Java but with C++" << endl;
}

bool validateUserChoice(vector<string> choice) {
	string commands[3] = { "go", "look", "take" };
	for (const string& command : commands) {
		if (command == choice[0]) {
			return true;
		}
	}
	return false;
}

void commandExecute(vector<string> command) {
    CommandInstantiator commandInstantiator;
    commandInstantiator.getCommand(command[0]);
}

vector<string> splitString(string toSplit) {
    vector<string> arr;
    string str;
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

int main() {
	auto *player = new Player();
	player->setCurrentLocation("Manchester");
	cout << player->getLocation() << endl;
	printWelcome();
	string choice;
	cout << ">> ";
	getline(cin, choice);
    vector<string> choiceArr = splitString(choice);
    for (const string& ele : choiceArr) {
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