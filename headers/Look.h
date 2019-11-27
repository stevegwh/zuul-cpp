//
// Created by forest on 31/10/2019.
//
#include "../headers/Command.h"
#ifndef ZUUL_CPP_LOOK_H
#define ZUUL_CPP_LOOK_H


class Look: public Command
{
public:
	void execute(std::vector<std::string> inputArr) override;
};


#endif //ZUUL_CPP_LOOK_H
