//
// Created by mateusz on 12.01.19.
//

#ifndef HOMEBUDGET_FILECSV_H
#define HOMEBUDGET_FILECSV_H
#include <string>

using namespace std;

class FileCSV {
private:
    string pathToFile;
public:
    string a;
    FileCSV();
    ~FileCSV();

    void setPathToFile(string pathToFile) { this->pathToFile = pathToFile; };
    void open(string pathToFile);
    void save();
};


#endif //HOMEBUDGET_FILECSV_H
