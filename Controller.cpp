//
// Created by mateusz on 12.01.19.
//

#include "Controller.h"

Controller::Controller() {};
Controller::~Controller() {};

void Controller::loopLogin() {
    FileCSV fileCSV;
    bool isOpenFile = fileCSV.open(login.getPathToLoginsFile());
    if (!isOpenFile) {
        exit(EXIT_FAILURE);
    }

    fileCSV.read(login.getVectorAllLoginCSV(), readable);

    readable.test();

    ui.showLogin();

    cout << "login: ";
    login.setNick(cin);
    cout << "\npassword: ";
    login.setPassword(cin);
    cout << endl;

    if (login.comparisonOfNickAndPasswordWithCVS(login.getNick(), login.getPassword())) {
        ui.successLogin();
    } else {
        ui.failLogin();
        char option;
        cin >> option;
        option = toupper(option);
        switch (option) {
            case 'Y':
                cout << "tak" << endl;
            case 'N':
                cout << "nie" << endl;
            default:
                cout << "Wrong answer" << endl;
        }
    }

}
