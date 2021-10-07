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
        Activity *collectionCal;

    public:
        // constructor 
        ActivityCollection();
       // ActivityCollection(const ActivityCollection, &int); 
       // ~ActvitiyCollection(); //destructor
        void addToArray(Activity);
        void growArray();
        int getSize();
        int getCount();  
        string displayArray(int);      
};


#endif