//
// Created by mateusz on 12.01.19.
//

#ifndef HOMEBUDGET_UI_H
#define HOMEBUDGET_UI_H

#include <iostream>
#include <string>

#include "Login.h"

class Login;

using namespace std;

class Ui {
public:
    Ui();
    ~Ui();

    void showMainMenu();
    void showLogin();
    void successLogin();
    void failLogin();
    void ending();
    void showTypeTransaction();
    void setLogin(Login& login);
};


#endif //HOMEBUDGET_UI_H
