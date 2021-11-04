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

ostream& operator<<(ostream& os, const User& opUserObj) {
    os << "UserID: " << opUserObj.username << 
    " First Name: " << opUserObj.firstname <<
    " Last name:  " << opUserObj.lastname << endl;

}

bool User::operator == (User& rhs) {
    if(username == rhs.username){
        return true;
    }
    else{
        return false;
    }
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


ActivityCollection User::getActivityCollection() {
    return *myActivityCollection;
}
