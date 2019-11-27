#ifndef ZUUL_CPP_COMMANDINSTANTIATOR_H
#define ZUUL_CPP_COMMANDINSTANTIATOR_H

#include <iostream>
#include <map>
#include <memory>
#include "Command.h"
#include "Go.h"
#include "Look.h"

class CommandInstantiator {
private:
	std::map<std::string, std::unique_ptr<Command>> commands;

public:
	void getCommand(const std::string& command, std::vector<std::string> inputArr);
	CommandInstantiator();
};


#endif //ZUUL_CPP_COMMANDINSTANTIATOR_H
