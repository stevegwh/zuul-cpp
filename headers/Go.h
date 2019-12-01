#ifndef ZUUL_CPP_GO_H
#define ZUUL_CPP_GO_H

#include "Command.h"

class Go: public Command
{
public:
	void execute(std::vector<std::string> inputArr) override;
};

#endif //ZUUL_CPP_GO_H
