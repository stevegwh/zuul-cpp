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
