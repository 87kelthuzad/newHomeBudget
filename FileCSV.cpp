//
// Created by mateusz on 12.01.19.
//

#include "FileCSV.h"

FileCSV::FileCSV() {};
FileCSV::~FileCSV() {};

bool FileCSV::open(const string & pathToFile) {
    setPathToFile(pathToFile);
    file.open(getPathToFile(), ios::in | ios::out);
    if (!file.is_open()) {
        cout << "Error: Can't open the file or File doesn't exist" << endl;
        return false;
    }
    return true;
}

void FileCSV::read(Readable & readable) {
    string line;
    while ( getline (file,line) ) {
        readable.addRecordToVectorLogin(line, readable.getVector());
    }
    file.close();
}

void FileCSV::save(const string & pathToFile, const string & record) {
    bool a = open(pathToFile);
}

