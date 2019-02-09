//
// Created by mateusz on 12.01.19.
//

#include "Controller.h"

Controller::Controller() {};
Controller::~Controller() {};

void Controller::loopLogin() {
//    FileCSV fileCSV;

    bool isOpenFile = fileCSV.open(user.getPathToFileUser());
    if (!isOpenFile) {
        exit(EXIT_FAILURE);
    }
    fileCSV.readUserFile(readable);
    readable.setLastNumberIdUser(readable.getVectorUser().rbegin()->id);

    isOpenFile = fileCSV.open(login.getPathToLoginsFile());
    if (!isOpenFile) {
        exit(EXIT_FAILURE);
    }

    fileCSV.readLoginFile(readable);
    ui.showLogin();
    ui.setLogin(login);
    if (login.comparisonOfNickAndPasswordWithCVS(readable)) {
        ui.successLogin();
        user.setCurrentUser(login,readable);
    } else {
        ui.failLogin();
        login.setNewRecrod(readable,fileCSV,user,login,ui);
    }

    isOpenFile = fileCSV.open(transaction.getPathToTransactionFile());
    if (!isOpenFile) {
        exit(EXIT_FAILURE);
    }
    fileCSV.readTransactionFile(readable);
    readable.setLastNumberIdTransaction(readable.getVectorTransaction().rbegin()->id);

    while (true) {
        ui.showMainMenu();
        transaction.setNewRecord(readable,localTime,user,transaction,ui,fileCSV);
    }
}
