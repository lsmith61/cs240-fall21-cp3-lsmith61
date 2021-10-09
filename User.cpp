#include "User.h"
#include<iostream>
#include <sstream>
#include <string>
#include<array>

using namespace std;
User::User() {
    ActivityCollection myActivityCollection;
    //myActivityCollection = new ActivityCollection();
    username = "";
    password = "";
}

void User::setUsername(){
    cout << "Create a user name: " << endl;
    cin >> username;
}

void User::setPassword() {
    cout << "Create a password: " << endl;
    cin >> password;
}
/*
ActivityCollection User::setActivityCollection() {
    ActivityCollection->*myActivityCollection;
}
*/

string User::getUsername() {
    return username;
}

string User::getPassword() {
    return password;
}

/*
ActivityCollection User::getActivityCollection() {
    return ActivityCollection;
}
*/