//
// Created by mateusz on 14.01.19.
//

#ifndef HOMEBUDGET_READABLE_H
#define HOMEBUDGET_READABLE_H

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

struct recordLogin {
    string nick;
    string password;
};

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
    vector<recordLogin> & getVector() { return vRecordLogin; }
    vector<string> split(const std::string& s, char delimiter);
};

#endif //HOMEBUDGET_READABLE_H
