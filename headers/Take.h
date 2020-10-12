#ifndef TAKE_H
#define TAKE_H

#include "../headers/Command.h"


class Take: public Command
{
public:
    void execute(std::vector<std::string> inputArr) override;
    Take();
};

#endif // TAKE_H
