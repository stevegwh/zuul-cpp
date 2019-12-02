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
    bool hasExit(std::string direction);
    std::string getName();
    std::string setName();
    std::string getDescription();
    std::string setDescription();
    std::string getExit(std::string direction);

    Room(std::vector<std::string> data) :
        name(data[0]), description(data[1])
    {
		if (data[2] != "null") {
			exits["north"] = data[2];
		}
		if (data[3] != "null") {
			exits["east"] = data[3];
		}
		if (data[4] != "null") {
			exits["south"] = data[4];
		}
		if (data[5] != "null") {
			exits["west"] = data[5];
		}
    }
};

#endif //ZUUL_CPP_ROOM_H
