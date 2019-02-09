//
// Created by mateusz on 28.01.19.
//

#include "Transaction.h"

Transaction::Transaction() {};
Transaction::~Transaction() {};

void Transaction::setNewRecord(Readable &readable, LocalTime& localTime,
        User &user, Transaction& transaction, Ui &ui, FileCSV& fileCSV) {
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