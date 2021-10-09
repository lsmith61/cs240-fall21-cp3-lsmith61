
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
        string password;
        ActivityCollection myActivityCollection;

    public:
        User();
        void setUsername();
        void setPassword();
        void userLogin(string, string);
        string getUsername();
        string getPassword();
        class ActivityCollection setActivityCollection();
        //class ActivityCollection getActivityCollection();
};


#endif