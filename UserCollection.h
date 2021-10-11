/*
#ifndef USERCOLLECTION_H
#define USERCOLLECTION_H
#include <string>
#include "DateTime.h"
#include "Activity.h"
#include "User.h"
using namespace std;

class UserCollection {
    private:
        int size; 
        int count;
        User *arrayUsers;

    public:
        // constructor 
        ActivityCollection();
        ActivityCollection(const ActivityCollection &ac); 
       // ~ActvitiyCollection(){ delete []collectionCal; }; //destructor
        void addToArray(Activity);
        void growArray();
        int getSize();
        int getCount();  
        string displayArray(int);      
};


#endif

*/