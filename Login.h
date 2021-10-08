#ifndef LOGIN_H
#define LOGIN_H
#include <string>
#include "DateTime.h"
#include "Activity.h"


class Login {
    private:
        string username;
        string password;
        Login *usersArray;

    public:
        Login();
        void setUserName();
        void setPassword();
        void userLogin(string, string);
};



#endif