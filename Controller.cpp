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

    fileCSV.readLoginFile(readable);
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
                exit(EXIT_FAILURE);
                break;
            default:
                cout << "Wrong answer" << endl;
                exit(EXIT_FAILURE);
        }
    }

    isOpenFile = fileCSV.open(user.getPathToFileUser());
    if (!isOpenFile) {
        exit(EXIT_FAILURE);
    }

    fileCSV.readUserFile(readable);
    user.setCurrentUser(login,readable);

//    isOpenFile = fileCSV.open(transaction.getPathToTransactionFile());
//    if (!isOpenFile) {
//        exit(EXIT_FAILURE);
//    }

    while (true) {
        ui.showMainMenu();
        int option;
        cin >> option;
        switch (option) {
            case 1:

                exit(EXIT_FAILURE);
        }
    }
}
