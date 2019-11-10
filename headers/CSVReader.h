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
    std::string delimeter;
    std::string fileName;
public:
    std::vector<std::vector<std::string>> getData();
    CSVReader(std::string filename, std::string delm = ",") :
            fileName(std::move(filename)), delimeter(std::move(delm))
    { }
};


#endif //ZUUL_CPP_CSVREADER_H
