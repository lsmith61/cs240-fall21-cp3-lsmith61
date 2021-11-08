#include"Activity.h"
#include"DateTime.h"
#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

ostream& operator<<(ostream& os, const Activity& opActivityObj) {
    os << "Activity Title: " << opActivityObj.activityTitle <<
    " Activity Creator: " << opActivityObj.activityCreator <<
    " Begin Time and Date: " << opActivityObj.beginDateTime <<
    " End Time and Date: " << opActivityObj.endDateTime << 
    " Venue: " << opActivityObj.venue <<
    " Exclusive: " << opActivityObj.exclusive << endl;
}


bool Activity::operator == (Activity& rhs) {
    if(activityTitle == rhs.activityTitle) {
        return true;
    }
    else {
        return false;
    }
}
/*
bool Activity::simpleCapacityConflict() {
    if(userCount > venueObj.getCapacity()){
        
    }
   
}
*/