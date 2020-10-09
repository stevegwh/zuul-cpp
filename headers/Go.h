#ifndef ZUUL_CPP_GO_H
#define ZUUL_CPP_GO_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include "Command.h"

class Go: public Command
{
private:
    std::vector<std::string> directions = {"north", "south", "east", "west"};
public:
    void execute(std::vector<std::string> inputArr) override;
    bool validate(std::string direction);
};

#endif //ZUUL_CPP_GO_H
