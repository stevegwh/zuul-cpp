#include "../headers/CommandInstantiator.h"

void CommandInstantiator::getCommand(const std::string& command, std::vector<std::string> inputArr) {
    commands[command]->execute(inputArr);
}

CommandInstantiator::CommandInstantiator() {
    commands["go"] = std::unique_ptr<Command>(new Go());
    commands["look"] = std::unique_ptr<Command>(new Look());
}
