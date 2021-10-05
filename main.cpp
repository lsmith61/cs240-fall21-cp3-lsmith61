#include "Activity.h"
#include<iostream>
#include<string>
//  #include "Date.h"
//  #include "Time.h"
#include<vector>
using namespace std;
 //TODO: Destructor somewhere??
  
int main() { 
   //  string title;
   //  string creator;
   //  string venue;
   //  Date myDateObj;
   //  Time myTimeObj; 
   //  Activity *myActivity = new Activity()

   //vector<Activity> calendarVector;
   // where does this Activty call go to for the constructro? 

   ActivityCollection myActivityCollection(1);

   while(true) {
      cout << "Choose from ['Create' 'Display' 'Quit']" << endl;
      string startingInput;
      cin >> startingInput;

      if (startingInput == "Create") {
         // use vetor
         //create new activity then add it to vector
         Activity myActivity;
         myActivity.createActivity();
         //calendarVector.push_back(myActivity);
         myActvityCollection
      }
      else if(startingInput == "Display"){
         // call function print statments 
         for(int i = 0; i < (int)calendarVector.size(); ++i) {
            // how do i call the funtion? confused about what paramters go into it? can an object be a paramter?
            //cout << "Number of activites: " << calanderVector.size() << endl;
           // cout << calendarVector.at(i).getActivity() << endl;
         }
      }
      else if(startingInput == "Quit"){
         // end program
         cout << "program exited" << endl;
         break;
      }
   }

   return 0;
}
