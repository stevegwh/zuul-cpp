//
// Created by Steve on 11/29/2019.
//

#include "../headers/CommandHandler.h"

bool CommandHandler::validateCommand(std::vector<std::string> inputArr) {
    return true;
}

void CommandHandler::executeCommand(std::vector<std::string> inputArr) {
    commandInstantiator->getCommand(inputArr[0])->execute(inputArr);
}
