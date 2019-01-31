//
// Created by mateusz on 28.01.19.
//

#ifndef HOMEBUDGET_TRANSACTION_H
#define HOMEBUDGET_TRANSACTION_H

#include <string>
#include <iostream>


using namespace std;

struct recordTransaction {
    int id;
    string nick;
    string nameUser;
    string lastNameUser;
    string typeTransaction;
    string date;
    int whoMany;
};

class Transaction {
private:
    recordTransaction sRecordTransaction;
    string pathToTransactionFile = "/home/mateusz/CLionProjects/HomeBudget/Transaction.csv";
public:
    Transaction();
    ~Transaction();

    string getPathToTransactionFile() { return pathToTransactionFile; }
    recordTransaction getRecordTransaction() { return sRecordTransaction; }

    int getId() { return sRecordTransaction.id; }
    string getNick() { return  sRecordTransaction.nick; }
    string getNameUser() { return  sRecordTransaction.nameUser; }
    string getLastNameUset() { return sRecordTransaction.lastNameUser; }
    string getTypeTransaction() { return  sRecordTransaction.typeTransaction; }
    string getDate() { return  sRecordTransaction.date; }
    int getWhoMany() { return  sRecordTransaction.whoMany; }

    void setDate(string date) { sRecordTransaction.date = date; }
    void setTypeTransaction(string type) { sRecordTransaction.typeTransaction = type; }
    void setWhoMany(istream& stream) { stream >> sRecordTransaction.whoMany; }
    void setId(int id) { sRecordTransaction.id = id; }
    void setNick(string nick) { sRecordTransaction.nick = nick; }
    void setNameUser(string nameUser) { sRecordTransaction.nameUser = nameUser; }
    void setLastNameUser(string lastNameUser) { sRecordTransaction.lastNameUser = lastNameUser; }
};

#endif //HOMEBUDGET_TRANSACTION_H
