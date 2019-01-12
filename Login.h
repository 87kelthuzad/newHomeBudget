//
// Created by mateusz on 12.01.19.
//

#ifndef HOMEBUDGET_LOGIN_H
#define HOMEBUDGET_LOGIN_H

#include <string>

using namespace std;

struct recordLogin {
    string nickCSV;
    string passwordCSV;
};

class Login {
private:
    string nick;
    string password;

    void comparisonOfLoginWithCVS();

public:
    Login();
    ~Login();
    Login(string nick, string password);

    void setNick(string nick) { this->nick = nick; }
    void setPassword(string password) { this->password = password; }

};


#endif //HOMEBUDGET_LOGIN_H
