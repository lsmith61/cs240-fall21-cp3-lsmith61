#ifndef TEST_H
#define TEST_H
#include <string>
#include "ActivityCollection.h"
#include "Activity.h"

using namespace std;

class Test {
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
        string myActivityString;

/*
        int dateM;
        int dateD;
        int dateY;
        int timeH;
        int timeM;
        int timeS;
*/

    public:
    void testAssignment();
    void testCopyConstructor(ActivityCollection &ac);
    
};


#endif