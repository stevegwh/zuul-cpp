#include "../headers/CommandInstantiator.h"
#include "../headers/Go.h"
#include "../headers/Look.h"
#include "../headers/Take.h"
#include "../headers/Quit.h"

Command* CommandInstantiator::getCommand(const std::string& command)
{
    return commands[command];
}

std::map<std::string, Command*> CommandInstantiator::getCommands()
{
    return commands;
}

CommandInstantiator::CommandInstantiator()
{
    commands["go"] = new Go;
    commands["look"] = new Look;
    commands["take"] = new Take;
    commands["quit"] = new Quit;
}
