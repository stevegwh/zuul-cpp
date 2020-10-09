#include "../headers/CommandInstantiator.h"

Command* CommandInstantiator::getCommand(const std::string& command) {
    return commands[command];
}

std::map<std::string, Command*> CommandInstantiator::getCommands()
{
    return commands;
}

CommandInstantiator::CommandInstantiator() {
    commands["go"] = new Go;
    commands["look"] = new Look;
    commands["quit"] = new Quit;
}
