#include "../headers/ZuulServices.h"

namespace ZuulServices 
{
    std::vector<std::string> splitString (const std::string &s, char delim)
    {
        std::vector<std::string> result;
        std::stringstream ss (s);
        std::string item;

        while (getline (ss, item, delim)) {
            result.push_back (item);
        }

        return result;
    }

    std::string toLower (const std::string s)
    {
        std::string copy = s;
        std::transform(copy.begin(), copy.end(), copy.begin(),
            [](unsigned char c){ return std::tolower(c); });
        return copy;
    }
}
