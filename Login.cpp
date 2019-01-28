//
// Created by mateusz on 12.01.19.
//

#include "Login.h"

Login::Login() {};
Login::~Login() {};

bool Login::comparisonOfNickAndPasswordWithCVS(Readable & readable) {
    for (auto value: readable.getVectorLogin()) {
        if (value.nick == getNick() && value.password == getPassword()) {
            return true;
        }
    }
    return false;
}
