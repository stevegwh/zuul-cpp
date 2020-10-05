
#ifndef QUIT_H
#define QUIT_H

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

#endif // QUIT_H
