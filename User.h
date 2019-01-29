//
// Created by mateusz on 29.01.19.
//

#ifndef HOMEBUDGET_USER_H
#define HOMEBUDGET_USER_H

#include <string>
#include <iostream>
#include "Login.h"
#include "Readable.h"

class Login;
class Readable;

using namespace std;

struct user {
    int id;
    string nick;
    string nameUser;
    string lastNameUser;
    int finalBudget;
};

class User {
private:
public:
    User();
    ~User();

    user recordUser;
    string pathToFileUser = "/home/mateusz/CLionProjects/HomeBudget/User.csv";

    void setFinalBudger(istream& stream) { stream >> recordUser.finalBudget; }
    string getPathToFileUser() { return  pathToFileUser; }

    void setCurrentUser(Login &login, Readable &readable);


};


#endif //HOMEBUDGET_USER_H
