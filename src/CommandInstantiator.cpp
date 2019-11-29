#include "../headers/CommandInstantiator.h"

Command* CommandInstantiator::getCommand(const std::string& command) {
    return commands[command];
}

CommandInstantiator::CommandInstantiator() {
    commands["go"] = new Go;
    commands["look"] = new Look;
}
