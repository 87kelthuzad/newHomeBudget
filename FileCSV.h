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
#include "Login.h"
#include "User.h"
#include "Transaction.h"

class Readable;
class Login;
class User;
class Transaction;

using namespace std;

class FileCSV {
private:
    string pathToFile;
    string delimeter = ",";
    fstream file;

public:

    FileCSV();
    ~FileCSV();

    void setPathToFile(const string &pathToFile) { this->pathToFile = pathToFile; };
    inline string getPathToFile() { return pathToFile; };
    inline string getDelimeter() { return delimeter; };

    bool open(const string &pathToFile);
    void readLoginFile(Readable &readable);
    void readUserFile(Readable &readable);
    void saveLogin(const string &pathToFile, Login &login);
    void saveUser(const string &pathToFile, Login &login, Readable &readable);
    void readTransactionFile(Readable &readable);
    void saveTransaction(const string &pathToFile, Transaction &transaction);
};

#endif //HOMEBUDGET_FILECSV_H