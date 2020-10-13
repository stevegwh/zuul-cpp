#ifndef ZUUL_CPP_ROOM_H
#define ZUUL_CPP_ROOM_H

#include <string>
#include <sstream>
#include <iostream>
#include <map>
#include <memory>
#include <utility>
#include <vector>
#include "InventoryItem.h"



class Room
{
private:
    std::string name;
    std::string description;
    std::vector<std::shared_ptr<InventoryItem>> itemsInRoom;
    std::map<std::string, std::string> exits;
public:
    std::string getName();
//    std::string setName();

    std::vector<std::shared_ptr<InventoryItem>> getItems();
    void removeItem(const std::shared_ptr<InventoryItem>& toRemove);

    std::string getDescription();
//    std::string setDescription();
    std::string getExit(const std::string& direction);
    bool hasExit(const std::string& direction);

    explicit Room(std::vector<std::string> data) :
        name(data[0]), description(data[1])
    {
        std::cout << "Room created" << std::endl;
        if (data[2] != "null") exits["north"] = data[2];
        if (data[3] != "null") exits["east"] = data[3];
        if (data[4] != "null") exits["south"] = data[4];
        if (data[5] != "null") exits["west"] = data[5];
        std::vector<std::string> items(data.begin() + 6, data.end());
        for(auto it=items.begin();it != items.end(); it+=2)
        {
            int weight = stoi(*(it +1));
//            InventoryItem* item = new InventoryItem(*it, weight);
            itemsInRoom.push_back(std::make_shared<InventoryItem>(*it, weight));
        }
    }
};

#endif //ZUUL_CPP_ROOM_H
