#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <string>
#include <vector>
#include"Venue.h"
#include "DateTime.h"

using namespace std;

class Activity {
    private:
        string activityTitle;
        string activityCreator; 
       // string activityVenue; 
        //Venue venue;
        string venue;
        DateTime beginDateTime;
        DateTime endDateTime;
        string exclusiveInput;
        string exclusiveOutput;
        bool exclusive;
        string random;
        string myActivityString;
    
    public:
        // one line funcitons can stay in here
        Activity() {}
        Activity(string activityTitle, string activityCreator, DateTime beginDateTime, DateTime endDateTime, string venue, bool exclusive) {
        this->activityTitle = activityTitle;
        this->activityCreator = activityCreator;
        this->beginDateTime = beginDateTime;
        this->endDateTime = endDateTime;
        this->venue = venue;
        this->exclusive = exclusive;
        }

        friend ostream& operator<<(ostream& os, const Activity& opActivityObj);
        bool operator == (Activity& rhs);



        
       
};

#endif
 