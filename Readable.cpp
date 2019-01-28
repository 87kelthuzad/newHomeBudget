//
// Created by mateusz on 14.01.19.
//

#include "Readable.h"

Readable::Readable() {};
Readable::~Readable() {};

void Readable::addRecordToVectorLogin(const string &line, vector<recordLogin> & v) {
    vector<string> splitString = split(line, getDelimeter());
    size_t size = splitString.size();
    string nick;
    for (int index = 0; index < size ; ++index) {
        if (index%2 > 0) {
            recordLogin r = {nick, splitString[index]};
            getVectorLogin().push_back(r);
        } else {
            nick = splitString[index];
        }
    }
}

void Readable::addRecordToVectorLogin(Login & login, vector<recordLogin> & v) {
    recordLogin r = {login.getNick(),login.getPassword()};
    getVectorLogin().push_back(r);
}

vector<string> Readable::split(const string& s, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}