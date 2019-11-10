#ifndef ZUUL_CPP_PLAYER_H
#define ZUUL_CPP_PLAYER_H

#include <string>
using namespace std;

class Player
{
private:
	string currentLocation = "London";
public:
	void setCurrentLocation(string location);
	string getLocation();
};

#endif //ZUUL_CPP_PLAYER_H
