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

/*
     operator overloaded --> return true if beginDateTime is less than endDateTime
    DateTime myDateTimeobj;
   endDateTime.getTimeInSeconds();
   cout << beginDateTime.getTimeInSeconds() << " " <<endDateTime.getTimeInSeconds() << endl;
    while(!isOrderValid)
    while(beginDateTime.getTimeInSeconds() > endDateTime.getTimeInSeconds()){
      bool isOrderValid = beginDateTime.getTimeInSeconds() < endDateTime.getTimeInSeconds();
      while(!isOrderValid){  
        
      //  cout << "Please re-enter date and time" << endl;
      //  cout << "BEGIN Date and Time" << endl;
      //  beginDateTime.createDateTime();

      //  cout << "END Date and Time" << endl;
       // endDateTime.createDateTime();

      //  isOrderValid = beginDateTime.getTimeInSeconds() < endDateTime.getTimeInSeconds();
    } 


    if(beginDateTime.getTimeInSeconds() < endDateTime.getTimeInSeconds()){
        cout << "Correct date/time order" << endl;
    }
    else{
        cout << "End date/time is prior to begin date/time" << endl;

    }
    */
    // TODO: if this is true continue --> if false reask for input

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
    } 
    else {
        exclusiveOutput = "not exclusive";
    }
}



