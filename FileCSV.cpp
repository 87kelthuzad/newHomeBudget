//
// Created by mateusz on 12.01.19.
//

#include "FileCSV.h"

FileCSV::FileCSV() {};
FileCSV::~FileCSV() {};

bool FileCSV::open(string pathToFile) {
    setPathToFile(pathToFile);
    file.open(getPathToFile(), ios::in | ios::out);
    if (!file.is_open()) {
        cout << "Error: Can't open the file or File doesn't exist" << endl;
        return false;
    }
    return true;
}

void FileCSV::read(vector<string> &v) {
    string line;
    while ( getline (file,line) ) {
        v.push_back(line);
    }
    file.close();
}

