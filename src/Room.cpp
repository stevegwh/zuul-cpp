#include "../headers/Room.h"

std::string Room::getDescription() {
	return description;
}

std::string Room::getName() {
	return name;
}

std::string Room::getExit(std::string direction) {
	return exits[direction];
}
