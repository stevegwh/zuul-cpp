#include "../headers/Player.h"


void Player::setCurrentLocation(string location)
{
	Player::currentLocation = location;
}

string Player::getLocation()
{
	return Player::currentLocation;
}
