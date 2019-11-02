//
// Created by forest on 01/11/2019.
//

#include "../headers/CommandInstantiator.h"

void CommandInstantiator::getCommand(const std::string& command) {
    commands[command]->execute();
}

CommandInstantiator::CommandInstantiator() {
    commands["go"] = std::unique_ptr<Command>(new Go());
    commands["look"] = std::unique_ptr<Command>(new Look());
}
