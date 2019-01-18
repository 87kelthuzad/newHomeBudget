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

class Login :public Readable{
private:
    recordLogin sRecordLogin;
    string pathToLoginsFile = "/home/mateusz/CLionProjects/HomeBudget/login.csv";
    vector<string> allLoginsCSV;
//    vector<recordLogin1> all;

public:
    Login();
    ~Login();

    void setNick(istream& stream) { stream >> sRecordLogin.nick; }
    void setPassword(istream& stream) { stream >> sRecordLogin.password; }
    inline string getNick() { return sRecordLogin.nick; }
    inline string getPassword() { return  sRecordLogin.password; }
    vector<string> & getVectorAllLoginCSV() { return allLoginsCSV; }
    string getPathToLoginsFile() { return pathToLoginsFile; }
    bool comparisonOfNickAndPasswordWithCVS(const string & nick, const string & password);
};


#endif //HOMEBUDGET_LOGIN_H
