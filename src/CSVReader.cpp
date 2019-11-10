//
// Created by forest on 07/11/2019.
//

#include <fstream>
#include <iostream>
#include "../headers/CSVReader.h"

std::vector<std::vector<std::string>> CSVReader::getData() {
    std::ifstream file(fileName);

    std::vector<std::vector<std::string> > dataList;

    std::string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line))
    {
        std::vector<std::string> vec;
        getline(file, line, ',') ;
        vec.push_back(line);
        dataList.push_back(vec);
    }
    // Close the File
    file.close();

    return dataList;
}
