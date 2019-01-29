//
// Created by mateusz on 14.01.19.
//

#ifndef HOMEBUDGET_READABLE_H
#define HOMEBUDGET_READABLE_H

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include "Login.h"
#include "Transaction.h"

using namespace std;

class Login;
class Transaction;

class Readable {
private:
    char delimeter = ',';

public:
    Readable();
    ~Readable();

    struct recordLogin {
        string nick;
        string password;
    };

    struct recordTransaction {
        int id;
        string nick;
        string nameUser;
        string lastNameUser;
        string typeTransaction;
        string date;
        int whoMany;
    };

    struct user {
        int id;
        string nick;
        string nameUser;
        string lastNameUser;
        int finalBudget;
    };

    vector<recordLogin> vRecordLogin;
    vector<recordTransaction> vRecordTransaction;
    vector<user> vUser.;

    inline char getDelimeter() { return delimeter; }
    void addRecordToVectorLogin(const string & line, vector<recordLogin> & v);
    void addRecordToVectorLogin(Login & login, vector<recordLogin> & v);
    void addRecordToVectorTransaction(Transaction & transaction, vector<recordTransaction> & v);
    vector<recordLogin> & getVectorLogin() { return vRecordLogin; }
    vector<recordTransaction> & getVectorTransaction() { return vRecordTransaction; }
    vector<user> & getVectorUser() { return  vUser; }
    vector<string> split(const std::string& s, char delimiter);
};

#endif //HOMEBUDGET_READABLE_H
