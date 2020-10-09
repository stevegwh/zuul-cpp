#ifndef ZUUL_CPP_COMMAND_H
#define ZUUL_CPP_COMMAND_H

#include <string>
#include <vector>


class Command {
public:
    virtual void execute(std::vector<std::string> inputArr) = 0;
    bool validate(std::vector<std::string> inputArr);
};


#endif //ZUUL_CPP_COMMAND_H
