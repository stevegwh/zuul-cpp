//
// Created by forest on 07/11/2019.
//

#ifndef ZUUL_CPP_CSVREADER_H
#define ZUUL_CPP_CSVREADER_H


#include <vector>
#include <string>


class CSVReader {
private:
    char delimeter;
    std::string fileName;
public:
    std::vector<std::vector<std::string>> getData();
    explicit CSVReader(std::string filename, char delm = ',') :
             delimeter(std::move(delm)), fileName(std::move(filename))
    { }
};


#endif //ZUUL_CPP_CSVREADER_H
