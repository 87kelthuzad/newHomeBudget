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

class Readable {
private:
    string delimeter = ",";

public:
    Readable();
    ~Readable();

    struct recordLogin {
        string nick;
        string password;
    };

    vector<recordLogin> vRecordLogin;

    void addRecordToVectorLogin(const string & line, vector<Readable::recordLogin> & v);
    vector<recordLogin> & getVector() { return vRecordLogin; }
    vector<string> split(const std::string& s, char delimiter);
    void test();
};




#endif //HOMEBUDGET_READABLE_H
