//
// Created by mateusz on 12.01.19.
//

#ifndef HOMEBUDGET_UI_H
#define HOMEBUDGET_UI_H

#include <iostream>
#include <string>

using namespace std;

class Ui {
public:
    Ui();
    ~Ui();

    void showMainMenu();
    void showLogin();
    void successLogin();
    void failLogin();

};


#endif //HOMEBUDGET_UI_H
