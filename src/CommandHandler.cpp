//
// Created by Steve on 11/29/2019.
//

#include "../headers/CommandHandler.h"

bool CommandHandler::validateCommandWord(std::vector<std::string> inputArr) {
    if (inputArr.size() <= 0) return false;
    auto commands = commandInstantiator->getCommands();
    for (auto it = commands.begin(); it != commands.end(); ++it)
    {
        if (it->first == inputArr[0]) return true;
    }
    return false;
}

void CommandHandler::executeCommand(std::vector<std::string> inputArr) {
    commandInstantiator->getCommand(inputArr[0])->execute(inputArr);
}
