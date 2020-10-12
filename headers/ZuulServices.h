
#ifndef ZUUL_CPP_SERVICES_H
#define ZUUL_CPP_SERVICES_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

namespace ZuulServices {
    std::vector<std::string> splitString (const std::string &s, char delim);
    std::string toLower (const std::string s);
};

#endif //ZUUL_CPP_SERVICES_H
