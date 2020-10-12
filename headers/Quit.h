
#ifndef ZUUL_CPP_QUIT_H
#define ZUUL_CPP_QUIT_H

#include "Command.h"

/**
 * @todo write docs
 */
class Quit :  public Command
{
public:
    /**
     * @todo write docs
     *
     * @param inputArr TODO
     * @return TODO
     */
    void execute(std::vector< std::string > inputArr) override;

};

#endif // ZUUL_CPP_QUIT_H
