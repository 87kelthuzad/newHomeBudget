//
// Created by mateusz on 12.01.19.
//

#ifndef HOMEBUDGET_FILECSV_H
#define HOMEBUDGET_FILECSV_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FileCSV {
private:
    string pathToFile;
    string delimeter = ",";
    fstream file;
public:
    FileCSV();
    ~FileCSV();

    void setPathToFile(string pathToFile) { this->pathToFile = pathToFile; };
    inline string getPathToFile() { return pathToFile; };
    inline string getDelimeter() { return delimeter; };

    bool open(string pathToFile);
    void read(vector<string> &v);
    void save(string pathToFile);
};


#endif //HOMEBUDGET_FILECSV_H