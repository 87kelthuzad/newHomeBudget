//
// Created by mateusz on 12.01.19.
//

#ifndef HOMEBUDGET_FILECSV_H
#define HOMEBUDGET_FILECSV_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Readable.h"
class Readable;

using namespace std;

class FileCSV {
private:
    string pathToFile;
    string delimeter = ",";
    fstream file;
public:

    FileCSV();
    ~FileCSV();

    void setPathToFile(const string & pathToFile) { this->pathToFile = pathToFile; };
    inline string getPathToFile() { return pathToFile; };
    inline string getDelimeter() { return delimeter; };

    bool open(const string & pathToFile);
    void read(Readable & readable);
    void save(const string & pathToFile, const string & record);
};

#endif //HOMEBUDGET_FILECSV_H