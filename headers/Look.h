#ifndef ZUUL_CPP_LOOK_H
#define ZUUL_CPP_LOOK_H

#include "Command.h"


class Look: public Command
{
public:
	void execute(std::vector<std::string> inputArr) override;
};


#endif //ZUUL_CPP_LOOK_H
