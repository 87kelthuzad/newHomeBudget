//
// Created by mateusz on 12.01.19.
//

#ifndef HOMEBUDGET_LOGIN_H
#define HOMEBUDGET_LOGIN_H

#include <iostream>
#include <string>
#include <vector>

#include "Readable.h"

using namespace std;

class Readable;

struct recordLogin {
    string nick;
    string password;
};

class Login {
private:
    recordLogin sRecordLogin;
    string pathToLoginsFile = "/home/mateusz/CLionProjects/HomeBudget/login.csv";

public:
    Login();
    ~Login();

    void setNick(istream& stream) { stream >> sRecordLogin.nick; }
    void setPassword(istream& stream) { stream >> sRecordLogin.password; }
    inline string getNick() { return sRecordLogin.nick; }
    inline string getPassword() { return  sRecordLogin.password; }
    string getPathToLoginsFile() { return pathToLoginsFile; }
    bool comparisonOfNickAndPasswordWithCVS(Readable & readable);
};


#endif //HOMEBUDGET_LOGIN_H
