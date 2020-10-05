#include "../headers/Room.h"

std::string Room::getDescription() {
	return description;
}

std::string Room::getName() {
	return name;
}

bool Room::hasExit(std::string direction) {
    return exits.find(direction) != exits.end();
}

std::string Room::getExit(std::string direction) {
	return exits[direction];
}
