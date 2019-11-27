//
// Created by forest on 07/11/2019.
//

#ifndef ZUUL_CPP_CSVREADER_H
#define ZUUL_CPP_CSVREADER_H


#include <utility>
#include <vector>
#include <string>


class CSVReader {
private:
    char delimeter;
    std::string fileName;
	std::vector<std::string> splitString(std::string toSplit, char delimeter);
public:
    std::vector<std::vector<std::string>> getData();
    CSVReader(std::string filename, char delm = ',') :
             delimeter(std::move(delm)), fileName(std::move(filename))
    { }
};


#endif //ZUUL_CPP_CSVREADER_H
