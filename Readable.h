//
// Created by mateusz on 14.01.19.
//

#ifndef HOMEBUDGET_READABLE_H
#define HOMEBUDGET_READABLE_H

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include "Login.h"

using namespace std;

class Login;

class Readable {
private:
    char delimeter = ',';

public:
    Readable();
    ~Readable();

    struct recordLogin {
        string nick;
        string password;
    };

    vector<recordLogin> vRecordLogin;

    inline char getDelimeter() { return delimeter; }
    void addRecordToVectorLogin(const string & line, vector<recordLogin> & v);
    void addRecordToVectorLogin(Login & login, vector<recordLogin> & v);
    vector<recordLogin> & getVectorLogin() { return vRecordLogin; }
    vector<string> split(const std::string& s, char delimiter);
};

#endif //HOMEBUDGET_READABLE_H
