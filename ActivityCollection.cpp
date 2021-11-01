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
}

/*
ActivityCollection ActivityCollection::getActivityCollection() {
    return ActivityCollection;
}*/
 
// Copy Constructor 
ActivityCollection::ActivityCollection(ActivityCollection &ac){
    myActivityCollection = ac.myActivityCollection; 
    count = ac.count;
    size = ac.size; 
};

ActivityCollection::~ActivityCollection(){ 
    delete []collectionCal; 
    delete []myActivityCollection;
}


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
    delete []collectionCal; // destructor 
    // cout collectionCal array for testing
    // sets the pointer collectionCal to the pointer for newCollectionCal
    collectionCal = newCollectionCal; 
}

/*ActivityCollection(const ActivityCollection &ac){
    size = ac.size;
    count = ac.count;
    collectionCal = ac.collectionCal;
} */

void ActivityCollection::addToArray(Activity myActivity){
    // use a pointer to
    if(count >= size){
        // double array and copy 
        growArray(); 
    }
    collectionCal[count] = myActivity; 
    ++ count; 
}

void ActivityCollection::displayAll(){
    for(int i = 0; i < count; ++i){
        cout << displayArray(i) << endl;
    }

}
string ActivityCollection::displayArray(int index){
    return collectionCal[index].getActivity(); 
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

