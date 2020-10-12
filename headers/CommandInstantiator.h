#ifndef ZUUL_CPP_COMMANDINSTANTIATOR_H
#define ZUUL_CPP_COMMANDINSTANTIATOR_H

#include <map>
#include "Command.h"

class CommandInstantiator {
private:
	std::map<std::string, Command*> commands;
public:
    std::map<std::string, Command*> getCommands();
    Command* getCommand(const std::string& command);
	CommandInstantiator();
};


#endif //ZUUL_CPP_COMMANDINSTANTIATOR_H
