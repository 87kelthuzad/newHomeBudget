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
    fstream file;
    file.open(pathToFile, ios_base::app );
    file << login.getNick() << "," << login.getPassword() << "\n";
    file.close();
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
    fstream file;
    cout << "Name: ";
    string name;
    cin >> name;
    cout << "LastName: ";
    string lastName;
    cin >> lastName;
    cout << "Budget: ";
    int budget;
    cin >> budget;
    file.open(pathToFile, ios_base::app );
    file << readable.getLastNumberIdUser()+1 << "," << login.getNick() << ","
         << name << "," << lastName << ","
         << budget << "\n";
    file.close();
}

void FileCSV::readTransactionFile(Readable &readable) {
    string line;
    while  ( getline(file, line)) {
        readable.addRecordToVectorTransaction(line, readable.getVectorTransaction());
    }
    file.close();
}

void FileCSV::saveTransaction(const string &pathToFile, Transaction &transaction) {
    fstream file;
    file.open(pathToFile, ios_base::app );
    file << transaction.getId() << "," << transaction.getNick() << ","
         << transaction.getNameUser() << "," << transaction.getLastNameUset() << ","
         << transaction.getTypeTransaction() << "," << transaction.getDate() << "," << transaction.getWhoMany() << "\n";
    file.close();

}

