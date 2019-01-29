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

    void setDate(istream& stream) { stream >> sRecordTransaction.date; }
    void setTypeTransaction(istream& stream) { stream >> sRecordTransaction.typeTransaction; }
    void setWhoMany(istream& stream) { stream >> sRecordTransaction.whoMany; }
    void setId(int id) { this->sRecordTransaction.id = id; }
    void setNick(string nick) { this->sRecordTransaction.nick; }
    void setNameUser(string nameUser) { this->sRecordTransaction.nameUser; }
    void setLastNameUser(string lastNameUser) { this->sRecordTransaction.lastNameUser; }
};

#endif //HOMEBUDGET_TRANSACTION_H
