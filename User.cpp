#include "User.h"
#include<iostream>
#include <sstream>
#include <string>
#include<array>

using namespace std;
User::User() {
    //ActivityCollection myActivityCollection;
    myActivityCollection = new ActivityCollection();
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
void User::display(){
    myActivityCollection->displayAll();
}
 /* 
 // unneccesary because when the User object is insantied that field is created, do not need to set the specifc field 
ActivityCollection User::setActivityCollection() {
    ActivityCollection->*myActivityCollection;
}
*/

//this is what i did with adam
void User::addActivity(Activity myActivity){
    myActivityCollection->addToArray(myActivity);
} 


string User::getUsername() {
    return username;
}

string User::getPassword() {
    return password;
}


ActivityCollection User::getActivityCollection() {
    return *myActivityCollection;
}
