//
// Created by mateusz on 14.01.19.
//

#include "Readable.h"

Readable::Readable() {};
Readable::~Readable() {};

void Readable::addRecordToVectorLogin(const string &line, vector<Readable::recordLogin> & v) {
    vector<string> splitString = split(line, ',');
    size_t size = splitString.size();
    string nick;
    for (int index = 0; index < size ; ++index) {
        if (index%2 > 0) {
            recordLogin r = {nick, splitString[index]};
            getVector().push_back(r);
        } else {
            nick = splitString[index];
        }
    }
}

vector<string> Readable::split(const string& s, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

void Readable::test() {
    size_t s = getVector().size();
    cout << "size " << s << endl;
    for (int index = 0; index < s ; ++index) {
        cout << "wazne "<< getVector()[index].nick << endl;
        cout << "wazne " << getVector()[index].password << endl;`
    }
}