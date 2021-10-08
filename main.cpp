#include "Activity.h"
#include "ActivityCollection.h"
#include<iostream>
#include<string>

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

 //out << ""
   
   while (true){
      cout << "Select: [Register, Login, User]" << endl;
      string topInput;
      cin >> topInput << endl;
      if(topInput == "Register"){
         cout >> "Enter username: " << endl;
         cin << userNameInput;
         cout >> "Enter password: " << endl;
         cin << userNameInput;
         Login loginUserObj(userNameInput, userNameInput);
      }
      else if(topInput == "Login"){
         ActivityCollection myActivityCollection; // this should be created within each login
      }
      else if(topInput == "Logout"){
         break;
      }
   }


   while(true) {
      cout << "Choose from ['Create' 'Display' 'Quit']" << endl;
      string startingInput;
      cin >> startingInput;

      if (startingInput == "Create") {
         // use vetor
         //create new activity then add it to vector
         
         Activity myActivity; // empty contstructor 
         myActivity.createActivity(); // populate here
         //calendarVector.push_back(myActivity);
         myActivityCollection.addToArray(myActivity);
      }
      else if(startingInput == "Display"){
         // call function print statments 
         //for(int i = 0; i < (int)calendarVector.size(); ++i) {
            // how do i call the funtion? confused about what paramters go into it? can an object be a paramter?
            //cout << "Number of activites: " << calanderVector.size() << endl;
           // cout << calendarVector.at(i).getActivity() << endl;
            for(int i = 0; i < myActivityCollection.getCount(); ++i) {
               cout << myActivityCollection.displayArray(i) << endl;
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
  

