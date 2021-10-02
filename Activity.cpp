#include"Activity.h"
#include"DateTime.h"
#include<iostream>
#include <sstream>
#include <string>
#include<vector>

using namespace std;

// Activity::Activity(string title, string creator, string venue, Date myDateObj, Time myTimeObj) {
//     activityTitle = title;
//     activityCreator = creator;
//     activityVenue = venue;
//     myDateObj = myDateObj;
//     myTimeObj = myTimeObj;
// }

string Activity::getActivity() {
    // TODO: ERROR: unsure what this is someting about binary expression, beginTime isn't allowed in thisn string?
    //TODO: Create a toString function from DateTime, this would make it into a string
    return "Activity: " + activityTitle + " | Creator: " + activityCreator + " | Venue: " + activityVenue + " | Begins: " + beginDateTime.print() + " | Ends: " + endDateTime.print() + " [" +  exclusiveOutput + "]";
   //  cout << title << endl << creator << endl << venue << endl;
}

void Activity::createActivity(){

    // use this because without input was weird without it, just take random input and never use
    cout << endl << "Create an event to add to your calander!" << endl;
    getline(cin, random);

    cout << "Enter Title: " << endl;
    getline(cin, activityTitle);

    //cin >> activityCreator;
   // inSS.str(lineString);
   
    cout << "Enter Creator: " << endl;
    getline(cin, activityCreator);
    //cin >> activityCreator

    cout << "Enter Venue: " << endl;
    getline(cin, activityVenue);
  //  cin >> activityVenue;

    cout << "BEGIN Date and Time" << endl;
    beginDateTime.createDateTime();

    cout << "END Date and Time" << endl;
    endDateTime.createDateTime();

    cout << "Is the event exclusive (y/n)" << endl;
    cin >> exclusiveInput;
    if (exclusiveInput == "y" || exclusiveInput == "yes") {
        exclusive = true;
    }
    else {
        exclusive = false;
    }

    if(exclusive)
    {
        exclusiveOutput = "exclusive";
    } else {
        exclusiveOutput = "not exclusive";
    }


    /*
    if(exclusive){
        exclusiveOutput = "Exclusive";
    }
    else{
        exclusiveOutput = "not exclusive";
    }
    */

// is there a way to put DateTime attributes in here??
    // myDateObj = getDate.(myDateObj);
}



