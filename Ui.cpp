//
// Created by mateusz on 12.01.19.
//

#include "Ui.h"

Ui::Ui() {};
Ui::~Ui() {};

void Ui::showMainMenu() {

}

void Ui::showLogin() {
    cout << "====================================================" << endl;
    cout << "========== Prosze o podanie loginu i hasła =========" << endl;
    cout << "====================================================" << endl;
}

void Ui::successLogin() {
    cout << "====================================================" << endl;
    cout << "============== Logowanie powiodło się ==============" << endl;
    cout << "====================================================" << endl;
}

void Ui::failLogin() {
    cout << "====================================================" << endl;
    cout << "============ Logowanie nie powiodło się ============" << endl;
    cout << "========== Czy chcesz dodać urzytkownika? ==========" << endl;
    cout << "=================== [Y]es or [N]o ==================" << endl;
    cout << "====================================================" << endl;
}