#ifndef ZUUL_CPP_COMMANDHANDLER_H
#define ZUUL_CPP_COMMANDHANDLER_H


#include <vector>
#include <string>
#include "CommandInstantiator.h"

class CommandHandler {
private:
    CommandInstantiator *commandInstantiator = new CommandInstantiator();
public:
    bool validateCommandWord(std::vector<std::string> inputArr);
    void executeCommand(std::vector<std::string>);
    CommandHandler() { }
};


#endif //ZUUL_CPP_COMMANDHANDLER_H
