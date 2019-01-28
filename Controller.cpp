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

    fileCSV.read(readable);

    for (auto item : readable.getVectorLogin()) {
        cout << item.nick << endl;
        cout << item.password << endl;
    }

    ui.showLogin();

    cout << "login: ";
    login.setNick(cin);
    cout << "\npassword: ";
    login.setPassword(cin);
    cout << endl;

    if (login.comparisonOfNickAndPasswordWithCVS(readable)) {
        ui.successLogin();
    } else {
        ui.failLogin();
        char option;
        cin >> option;
        option = toupper(option);
        switch (option) {
            case 'Y':
                cout << "tak" << endl;
                readable.addRecordToVectorLogin(login, readable.getVectorLogin());
                fileCSV.saveLogin(login.getPathToLoginsFile(), login);
                break;
            case 'N':
                ui.ending();
                break;
            default:
                cout << "Wrong answer" << endl;
        }
    }
    for (auto item : readable.getVectorLogin()) {
        cout << item.nick << endl;
        cout << item.password << endl;
    }
}
