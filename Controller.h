//
// Created by mateusz on 12.01.19.
//

#ifndef HOMEBUDGET_CONTROLLER_H
#define HOMEBUDGET_CONTROLLER_H

#include "Login.h"

class Controller {
private:
    Login login;

public:
    Controller();
    ~Controller();

    void mainLoop() {};

};


#endif //HOMEBUDGET_CONTROLLER_H
