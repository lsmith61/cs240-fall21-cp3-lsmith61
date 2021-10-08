#include "Login.h"
#include<iostream>
#include <sstream>
#include <string>
#include<array>

using namespace std;

/*
Login::Login(string username, string password) {
    username = username;
    password = password;

}
*/

void Login::setUserName() {
    cout << "Create a username: " << endl;
    cin >> username;
}

void Login::setPassword() {
    cout << "Create a password: " << endl;
    cin >> password;
}

string Login::getUserName() {
    return username;
}

string Login::getPasswrod(){
    return password();
}
void userLogin(string, string) {
    cout << "Enter username: " << endl;
    cin >> username;
    cout << "Enter password: " << endl;
    cin >> password;

}




