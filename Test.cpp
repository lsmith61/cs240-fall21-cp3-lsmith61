
#include "Test.h"
#include "ActivityCollection.h"
#include "DateTime.h"
#include "User.h"
#include <iostream>
#include <stdlib.h>

using namespace std;



void testAssignment() {
       // cout< < "Testing" << endl;
        
        cout << "Testing Time and Date Class (Begin Date / Time)" << endl;
        int dateM = 10;
        int dateD = 20;
        int dateY = 2021;

        int timeH = 11;
        int timeM = 30;
        int timeS = 00;
        
        DateTime beginDateTime(dateM, dateD, dateY, timeH, timeM, timeS);
        cout << "Expected output: BeginDate: [10-20-2021], BeginTime: [11:30:00]" << endl;
        //string beginDate = "10-20-2021";
        //string beginTime = "11:30:00";
        
        cout << "Testing Time and Date Class (End Date / Time)" << endl;
        int newdateM = 10;
        int newdateD = 21;
        int newdateY = 2021;

        int newtimeH = 23;
        int newtimeM = 59;
        int newtimeS = 59; 
        DateTime endDateTime(newdateM, newdateD, newdateY, newtimeH, newtimeM, newtimeS);
       // string endDate = "10-21-2021";
       // string endTime = "12:00:00";
       
        
        //cout testing time and date class test


        cout << "Testing the next thing..." << endl;
       

/*
        activityTitle = "work";
        creator = "luke";
        beginDate = "10-10-2021";
        beginTime = "10:00:00";
        endDate = "10-11-2021";
        endTime = "11:00:00";
        venue = "c4";
        exclusive = "y";
*/

}
/*
void testCopyConstructor(ActivityCollection &ac) {
        // test to see if when the copy constructor runs that you still have the same number of elements in the array 
        // when you pass myActivity into 
        ActivityCollection ac.a1;
        ActivityCollection ac.b1 = ac.a1;
        ActivityCollection c1;
        c1 = ac.a1;
        Activity myActivityTest;
        c1.addToArray(myActivityTest);
       // a1 = a1; 
        // c1.getSize() > a1.getSize(); // should equal a1.size() + 1

}
*/

/*
test assignmentOperator() {

}

*/


int main() {
        testAssignment();
        //testCopyConstructor(*ac);
        return 0;
}