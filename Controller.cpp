//
// Created by mateusz on 12.01.19.
//

#include "Controller.h"

Controller::Controller() {};
Controller::~Controller() {};

void Controller::loopLogin() {
    FileCSV fileCSV;

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

    cout << "login: ";
    login.setNick(cin);
    cout << "\npassword: ";
    login.setPassword(cin);
    cout << endl;
    if (login.comparisonOfNickAndPasswordWithCVS(readable)) {
        ui.successLogin();
        user.setCurrentUser(login,readable);
    } else {
        ui.failLogin();
        char option;
        cin >> option;
        option = toupper(option);
        switch (option) {
            case 'Y':
                readable.addRecordToVectorLogin(login, readable.getVectorLogin());
                fileCSV.saveLogin(login.getPathToLoginsFile(), login);
                isOpenFile = fileCSV.open(user.getPathToFileUser());
                if (!isOpenFile) {
                    exit(EXIT_FAILURE);
                }
                fileCSV.saveUser(user.getPathToFileUser(), login, readable);
                fileCSV.readUserFile(readable);
                user.setCurrentUser(login,readable);
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

    isOpenFile = fileCSV.open(transaction.getPathToTransactionFile());
    if (!isOpenFile) {
        exit(EXIT_FAILURE);
    }
    fileCSV.readTransactionFile(readable);
    readable.setLastNumberIdTransaction(readable.getVectorTransaction().rbegin()->id);
//    for (auto item: readable.getVectorTransaction()) {
//        cout << item.id << " " << item.nick << " "
//        << item.nameUser << " " << item.lastNameUser << " "
//        << item.typeTransaction << " " << item.date << " " << item.whoMany << endl;
//    }

    while (true) {
        ui.showMainMenu();
        int option;
        cin >> option;
        switch (option) {
            case 1:
                ui.showTypeTransaction();
                char option1;
                cin >> option1;
                switch (option1) {
                    case 'S':
                        transaction.setTypeTransaction("sklep");
                        break;
                    case 'I':
                        transaction.setTypeTransaction("internet");
                        break;
                    default:
                        transaction.setTypeTransaction("brak");
                        break;
                }
                transaction.setDate(localTime.getTimeDay() + "-"
                        + localTime.getTimeMonth() + "-" + localTime.getTimeYear());
                cout << "Ile wydano pieniedzy: ";
                transaction.setWhoMany(cin);
                transaction.setNick(user.recordUser.nick);
                transaction.setId(readable.getLastNumberIdTransaction()+1);
                transaction.setNameUser(user.recordUser.nameUser);
                transaction.setLastNameUser(user.recordUser.lastNameUser);
                readable.addRecordToVectorTransaction(transaction, readable.getVectorTransaction());
                fileCSV.saveTransaction(transaction.getPathToTransactionFile(), transaction);
                break;
            case 7:
                exit(EXIT_SUCCESS);
        }
    }
}
