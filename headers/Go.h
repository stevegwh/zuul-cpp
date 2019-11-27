#include "../headers/Command.h"

#ifndef ZUUL_CPP_GO_H
#define ZUUL_CPP_GO_H

class Go: public Command
{
private:

public:
	void execute(std::vector<std::string> inputArr) override;
};

#endif //ZUUL_CPP_GO_H
