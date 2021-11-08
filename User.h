
#ifndef USER_H
#define USER_H
#include <string>
#include<iostream>
#include "DateTime.h"
#include "Activity.h"
#include "ActivityCollection.h"

class User {
    private:
        string username;
        string firstname;
        string lastname;
        string password;
        

    public:
        User();
        User(string username, string firstname, string lastname) {
            this->username = username;
            this->firstname = firstname;
            this->lastname  = lastname;
        }
        void setUsername();
        void setPassword();
        void userLogin(string, string);
        string getUsername() { return username; };
        string getFirstname() {return firstname; };
        string getlastname() {return lastname; };
        string getPassword();
        friend ostream& operator<<(ostream& os, const User& opUserObj);
        bool operator == (User& rhs);
};


#endif