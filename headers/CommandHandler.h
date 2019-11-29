#ifndef ZUUL_CPP_COMMANDHANDLER_H
#define ZUUL_CPP_COMMANDHANDLER_H


#include <vector>
#include <string>
#include "CommandInstantiator.h"

class CommandHandler {
    private:
        CommandInstantiator *commandInstantiator = new CommandInstantiator();
    public:
    void executeCommand(std::vector<std::string>);
    bool validateCommand(std::vector<std::string> inputArr);
    CommandHandler() { }
};


#endif //ZUUL_CPP_COMMANDHANDLER_H
