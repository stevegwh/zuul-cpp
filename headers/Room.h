//
// Created by forest on 31/10/2019.
//

#ifndef ZUUL_CPP_ROOM_H
#define ZUUL_CPP_ROOM_H

#include <string>
#include <map>
#include <utility>
#include <vector>


class Room
{
private:
    std::string name;
    std::string description;
    std::vector<std::string> itemsInRoom;
    std::vector<std::string> actorsInRoom;
    std::map<std::string, std::string> exits;
public:
    std::string getDescription();
    std::string setDescription();

    explicit Room(std::string data[]) {
        name = data[0];
        description = data[1];
    }
};

#endif //ZUUL_CPP_ROOM_H
