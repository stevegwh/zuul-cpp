#include "../headers/CSVReader.h"
#include <fstream>
#include "../headers/ZuulServices.h"
#include <iostream>
#include <utility>

std::vector<std::vector<std::string>> CSVReader::getData() {
    std::cout << "BEING CALLED" << std::endl;
    std::ifstream file(fileName);

    std::vector<std::vector<std::string> > dataList;

    std::string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line, '\n'))
    {
        std::vector<std::string> vec = ZuulServices::splitString(line, delimeter);
        dataList.push_back(vec);
    }
    // Close the File
    file.close();

    return dataList;
}
