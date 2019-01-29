//
// Created by mateusz on 14.01.19.
//

#ifndef HOMEBUDGET_READABLE_H
#define HOMEBUDGET_READABLE_H

#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include "Login.h"
#include "Transaction.h"
#include "User.h"

using namespace std;

class Login;
class Transaction;
class User;

class Readable {
private:
    char delimeter = ',';

//    User user;

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

    struct recordUser {
        int id;
        string nick;
        string nameUser;
        string lastNameUser;
        int finalBudget;
    };

    vector<recordLogin> vRecordLogin;
    vector<recordTransaction> vRecordTransaction;
    vector<recordUser> vUser;

    inline char getDelimeter() { return delimeter; }

    void addRecordToVectorLogin(const string & line, vector<recordLogin> & v);
    void addRecordToVectorLogin(Login & login, vector<recordLogin> & v);
//    void addRecordToVectorTransaction(Transaction & transaction, vector<recordTransaction> & v);
    void addRecordToVectorUser(const string & line, vector<recordUser> & v);
    void addRecordToVectorUser(User & user, vector<recordUser> & v);

    vector<recordLogin> & getVectorLogin() { return vRecordLogin; }
    vector<recordTransaction> & getVectorTransaction() { return vRecordTransaction; }
    vector<recordUser> & getVectorUser() { return  vUser; }
    vector<string> split(const std::string& s, char delimiter);
};

#endif //HOMEBUDGET_READABLE_H
