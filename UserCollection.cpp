/*
#include "UserCollection.h"
#include<iostream>
#include <sstream>
#include <string>
#include<array>

using namespace std;

UserCollection::UserCollection(){
    size = 1;
    count = 0;
    arrayUsers = new UserCollection[size];
};

UserCollection UserCollection::getUserCollection() {
    return UserCollection;
}
 ActivityCollection::~ActivityCollection(){ 
     delete []arrayUsers;
    }; //destructor


UserCollection::UserCollection(const UserCollection &ac){
    Activity *arrayUsers;
    count = ac.count;
    ptr_to_data 
    
};


void UserCollection::growArray(){
    size = size * 2;
    Activity *newarrayUsers = new User[size];
    for(int i = 0; i < count; ++i) {
        newArrayUsers[i] = arrayUsers[i];
    }
   // for(int i = 0; i < arrayUsers.size(); ++i ) {
   //     arrayUsers[i] = null;
   //     // cout << arrayUsers[i] // make sure these are all null
    //} 
    delete []arrayUsers; // destructor 
    // cout arrayUsers array for testing
    // sets the pointer arrayUsers to the pointer for newarrayUsers
    arrayUsers = newArrayUsers; 
}

UserCollection(const UserCollection &ac){
    size = ac.size;
    count = ac.count;
    arrayUsers = ac.arrayUsers;
} 

void UserCollection::addToArray(User myUser){
    // use a pointer to
    if(count >= size){
        // double array and copy 
        growArray(); 
    }
    arrayUsers[count] = myActivity; 
    ++ count; 
}

string UserCollection::displayArray(int index){
    return arrayUsers[index].getUser(); 
}

    for(int i = 0; i < collecitonCal.size(); ++i){
        if(arrayUsers[size - 1] != null){
            if(arrayUsers[i] != null) {
                // add to earlist element in array which is not null
                arrayUsers[i] = myActivity;
            }
        }
        else{
            //copy array make it double
            arrayUsers
        }
    }

int UserCollection::getSize(){
    return size;
}

int UserCollection::getCount(){
    return count;
}



*/