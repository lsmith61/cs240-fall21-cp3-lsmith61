#ifndef ACTIVITYCOLLECTION_H
#define ACTIVITYCOLLECTION_H
#include <string>
#include "DateTime.h"
#include "Activity.h"
using namespace std;

class ActivityCollection {
    private:
        int size; 
        int count;
        Activity *myActivityCollection;
        // this is not needed to declare since it is a temp declaration in growArray function
        //Activity *newCollectionCal;
        Activity *collectionCal; // Create an array that holds Activity class objects 

    public:
        // constructor 
        ActivityCollection();
        ActivityCollection(ActivityCollection &ac); 
        ~ActivityCollection(); //destructor
        void addToArray(Activity);
        void growArray();
        int getSize();
        int getCount();  
        string displayArray(int);  
        void displayAll();
        //ActivityCollection getActivityCollection();    
};


#endif