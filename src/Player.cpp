#include "../headers/Player.h"


void Player::setCurrentLocation(std::string location)
{
	Player::currentLocation = location;
}

std::string Player::getLocation()
{
	return Player::currentLocation;
}
