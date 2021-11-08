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
        Venue venue;
       // DateTime beginDateTime;
        string beginTimeTemp;
        string beginDateTemp;
        //DateTime endDateTime;
        string endTimeTemp;
        string endDateTemp;
        string exclusiveInput;
        string exclusiveOutput;
        bool exclusive;
        string random;
        string myActivityString;
    
    public:
        // one line funcitons can stay in here
        Activity();
       // Activity(string activityTitle, string activityCreator, DateTime beginDateTime, DateTime endDateTime, Venue venue, bool exclusive);
        Activity(string activityTitle, string activityCreator, string beginTimeTemp, string beginDateTemp, string endTimeTemp, string endDateTemp, Venue venue, bool exclusive) {
        this->activityTitle = activityTitle;
        this->activityCreator = activityCreator;
        this->beginTimeTemp = beginTimeTemp;
        this->beginDateTemp = beginDateTime;
        this->endTimeTemp = endTimeTemp;
        this->endDateTemp = endDateTemp;
        this->venue = venue;
        this->exclusive = exclusive;
        }
        void createActivity();
        Activity(string, string, string);
        Activity(const Activity &act);
        string getActivity();
        /*string getTitle() { return activityTitle; };
        string getCreator() { return activityCreator; };
        string getVenue() { return activityVenue; };
        string getLine();
        DateTime getElapsedTime();
        DateTime getElapsedDate();
        */
        
        
       // istringstream inSS;
       // string lineString;
};

#endif
 