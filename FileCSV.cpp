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

void FileCSV::readLoginFile(Readable &readable) {
    string line;
    while ( getline (file,line) ) {
        readable.addRecordToVectorLogin(line, readable.getVectorLogin());
    }
    file.close();
}

void FileCSV::saveLogin(const string &pathToFile, Login & login) {
    fstream file1;
    file1.open(pathToFile, ios_base::app );
    file1 << login.getNick() << "," << login.getPassword() << "\n";
    file1.close();
}

void FileCSV::readUserFile(Readable &readable) {
    if (!readable.getVectorUser().empty()) {
        readable.getVectorUser().clear();
    }
    string line;
    while ( getline (file,line) ) {
        readable.addRecordToVectorUser(line, readable.getVectorUser());
    }
    file.close();
}

void FileCSV::saveUser(const string &pathToFile, Login &login, Readable &readable) {
    fstream file1;
    cout << "Name: ";
    string name;
    cin >> name;
    cout << "LastName: ";
    string lastName;
    cin >> lastName;
    cout << "Budget: ";
    int budget;
    cin >> budget;
    file1.open(pathToFile, ios_base::app );
    file1 << readable.getLastNumberIdUser()+1 << "," << login.getNick() << ","
         << name << "," << lastName << ","
         << budget << "\n";
    file1.close();
}

