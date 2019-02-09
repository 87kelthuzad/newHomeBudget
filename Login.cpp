//
// Created by mateusz on 12.01.19.
//

#include "Login.h"

Login::Login() {};
Login::~Login() {};

bool Login::comparisonOfNickAndPasswordWithCVS(Readable & readable) {
    for (auto value: readable.getVectorLogin()) {
        if (value.nick == getNick() && value.password == getPassword()) {
            return true;
        }
    }
    return false;
}

void Login::setNewRecrod(Readable &readable, FileCSV &fileCSV, User &user, Login& login, Ui& ui) {
    char option;
    cin >> option;
    option = toupper(option);
    switch (option) {
        case 'Y': {
            readable.addRecordToVectorLogin(login, readable.getVectorLogin());
            fileCSV.saveLogin(login.getPathToLoginsFile(), login);
            bool isOpenFile = fileCSV.open(user.getPathToFileUser());
            if (!isOpenFile) {
                exit(EXIT_FAILURE);
            }
            fileCSV.saveUser(user.getPathToFileUser(), login, readable);
            fileCSV.readUserFile(readable);
            user.setCurrentUser(login,readable); }
            break;
        case 'N':
            ui.ending();
            exit(EXIT_FAILURE);
        default:
            cout << "Wrong answer" << endl;
            exit(EXIT_FAILURE);
    }
}
