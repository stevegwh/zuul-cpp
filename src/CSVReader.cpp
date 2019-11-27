#include <fstream>
#include <iostream>
#include "../headers/CSVReader.h"

std::vector<std::string> CSVReader::splitString(std::string toSplit, char delimeter) {
    std::vector<std::string> arr;
    std::string str;
    for (unsigned long i = 0; i < toSplit.length(); ++i) {
        if (toSplit[i] == delimeter) {
            arr.push_back(str);
            str = "";
        } else if (i == toSplit.length() - 1) {
            str += toSplit[i];
            arr.push_back(str);
        } else {
            str += toSplit[i];
        }
    }
    return arr;
}

std::vector<std::vector<std::string>> CSVReader::getData() {
    std::ifstream file(fileName);

    std::vector<std::vector<std::string> > dataList;

    std::string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line, '\n'))
    {
        std::vector<std::string> vec = splitString(line, delimeter);
        dataList.push_back(vec);
    }
    // Close the File
    file.close();

    return dataList;
}
