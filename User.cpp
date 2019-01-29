//
// Created by mateusz on 29.01.19.
//

#include "User.h"

User::User() {};
User::~User() {};

void User::setCurrentUser(Login &login, Readable &readable) {
    for (const auto value : readable.getVectorUser()) {
        if (login.getNick() == value.nick) {
            recordUser = {value.id, value.nick, value.nameUser, value.lastNameUser, value.finalBudget};
        }
    }
}