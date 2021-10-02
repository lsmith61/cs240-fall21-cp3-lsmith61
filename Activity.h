#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <string>
#include "DateTime.h"

using namespace std;

class Activity {
    public:
        // one line funcitons can stay in here
        Activity() {};
        void createActivity();
        Activity(string, string, string);
        string getTitle() { return activityTitle; };
        string getCreator() { return activityCreator; };
        string getVenue() { return activityVenue; };
        string getActivity();
        string getLine();
        
    private:
        string activityTitle;
        string activityCreator;
        string activityVenue;
        DateTime beginDateTime;
        DateTime endDateTime;
        string exclusiveInput;
        string exclusiveOutput;
        bool exclusive;

        string random;
       // istringstream inSS;
       // string lineString;
};

#endif
 