//
// Created by mateusz on 12.01.19.
//

#include "Login.h"

Login::Login() {};
Login::~Login() {};

bool Login::comparisonOfNickAndPasswordWithCVS(const string & nick, const string & password) {
    for (auto const& value: allLoginsCSV) {
        string record = value;
        size_t pos = 0;
        string token;
        string delimiter = ",";
        while ((pos = record.find(delimiter)) != string::npos) {
            token = value.substr(0, pos);
            record.erase(0, pos + delimiter.length());
            if (token.compare(nick) == 0 && record.compare(password) == 0) {
                return true;
            }
        }
    }
    return false;
}
