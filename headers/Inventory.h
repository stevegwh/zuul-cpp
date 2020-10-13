#ifndef INVENTORY_H
#define INVENTORY_H
#include "Command.h"


class Inventory : public Command
{
public:
    void execute(std::vector<std::string> inputArr) override;
    Inventory();
};

#endif // INVENTORY_H
