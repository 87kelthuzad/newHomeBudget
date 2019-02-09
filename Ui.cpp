//
// Created by mateusz on 12.01.19.
//

#include "Ui.h"

Ui::Ui() {};
Ui::~Ui() {};

void Ui::showMainMenu() {
    cout << "====================================================" << endl;
    cout << "==== Wybierz jedna z opcji ktora Cie interesuje ====" << endl;
    cout << "================ 1)Dodaj transakcje ================" << endl;
    cout << "========== 2)Pokaż transakcje tej sesji ============" << endl;
    cout << "========== 3)Pokaż wszystkie transakcje ============" << endl;
    cout << "= 5)Pokaz wszystkie transakcje z danego miesiaca: ==" << endl;
    cout << "============ 6) Ustaw wysokość budzetu =============" << endl;
    cout << "============== 7) Zakonczenie Programu =============" << endl;
    cout << "====================================================" << endl;
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

void Ui::ending() {
    cout << "====================================================" << endl;
    cout << "==================== Dowidzenia ====================" << endl;
    cout << "====================================================" << endl;
}

void Ui::failLogin() {
    cout << "====================================================" << endl;
    cout << "============ Logowanie nie powiodło się ============" << endl;
    cout << "========== Czy chcesz dodać urzytkownika? ==========" << endl;
    cout << "=================== [Y]es or [N]o ==================" << endl;
    cout << "====================================================" << endl;
}

void Ui::showTypeTransaction() {
    cout << "====================================================" << endl;
    cout << "============ Prosze podać typ transakcji ===========" << endl;
    cout << "============== [S]klep lub [I]nternet ==============" << endl;
    cout << "====================================================" << endl;
}

void Ui::setLogin(Login& login) {
    cout << "login: ";
    login.setNick(cin);
    cout << "\npassword: ";
    login.setPassword(cin);
    cout << endl;
}