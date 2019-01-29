//
// Created by mateusz on 12.01.19.
//

#ifndef HOMEBUDGET_CONTROLLER_H
#define HOMEBUDGET_CONTROLLER_H

#include <iostream>

#include "Login.h"
#include "Ui.h"
#include "FileCSV.h"
#include "Readable.h"
#include "Transaction.h"
#include "User.h"

using namespace std;

class Controller {
private:
    Login login;
    Ui ui;
    Readable readable;
    Transaction transaction;
    User user;

    string nick;
    string password;

public:
    Controller();
    ~Controller();

    void mainLoop();
    void loopLogin();

};


#endif //HOMEBUDGET_CONTROLLER_H
