//
// Created by mateusz on 12.01.19.
//

#ifndef HOMEBUDGET_LOGIN_H
#define HOMEBUDGET_LOGIN_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct recordLogin {
    string nickCSV;
    string passwordCSV;
};

class Login {
private:
    recordLogin sRecordLogin;
    string nick;
    string password;
    string pathToLoginsFile = "/home/mateusz/CLionProjects/HomeBudget/login.csv";
    vector<string> allLoginsCSV;
    vector<recordLogin> all;

public:
    Login();
    ~Login();
    Login(string nick, string password);

    void setNick(string nick) { this->nick = nick; }
    void setPassword(string password) { this->password = password; }
    vector<string> & getVectorAllLoginCSV() { return allLoginsCSV; }
    string getPathToLoginsFile() { return pathToLoginsFile; }
    bool comparisonOfLoginWithCVS(string nick, string password);
};


#endif //HOMEBUDGET_LOGIN_H
