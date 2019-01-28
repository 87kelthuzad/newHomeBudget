//
// Created by mateusz on 12.01.19.
//

#include "Login.h"

Login::Login() {};
Login::~Login() {};

bool Login::comparisonOfNickAndPasswordWithCVS(const string & nick, const string & password, Readable & readable) {
    for (auto value: readable.getVector()) {
        if (value.nick == nick && value.password == password) {
            return true;
        }
    }
    return false;
}
