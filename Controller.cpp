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

    fileCSV.read(login.getVectorAllLoginCSV());

    ui.showLogin();
    cout << "login: ";
    cin >> nick;
    cout << "\npassword: ";
    cin >> password;
    cout << endl;
    if (login.comparisonOfLoginWithCVS(nick, password)) {
        cout << "tak" <<  endl;
    } else {
        cout << "nie" << endl;
    }

}
