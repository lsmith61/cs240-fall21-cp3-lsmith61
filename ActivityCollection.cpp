#include "ActivityCollection.h"
#include<iostream>
#include <sstream>
#include <string>
#include<array>

using namespace std;

ActivityCollection::ActivityCollection(){
    size = 1;
    count = 0;
    collectionCal = new Activity[size];
};

/*ActivityCollection::ActivityCollection(const ActivityCollection &ac){
    Activity *collectionCal;
    count = ac.count;
    ptr_to_data 
    
};
*/


/*
void ActivityCollection::growArray(){
    size = size * 2;
    Activity *newCollectionCal = new Activity[size];
    for(int i = 0; i < count; ++i) {
        newCollectionCal[i] = collectionCal[i];
    }
   // for(int i = 0; i < collectionCal.size(); ++i ) {
   //     collectionCal[i] = null;
   //     // cout << collectionCal[i] // make sure these are all null
    //} 
    delete []collectionCal;
    // cout collectioncal array for testing
    collectionCal = newCollectionCal;
}
*/



void ActivityCollection::addToArray(Activity myActivity){
    // use a pointer to
    if(count >= size){
        // double array and copy 
        growArray(); 
    }
    collectionCal[count] = myActivity; 
    ++ count; 
}


   /* for(int i = 0; i < collecitonCal.size(); ++i){
        if(collectionCal[size - 1] != null){
            if(collectionCal[i] != null) {
                // add to earlist element in array which is not null
                collectionCal[i] = myActivity;
            }
        }
        else{
            //copy array make it double
            collectionCal
        }
    }*/

    int ActivityCollection::getSize(){
        return size;
    }

    int ActivityCollection::getCount(){
        return count;
    }
    
