#include "Activity.h"
#include "ActivityCollection.h"
#include "Login.h"
#include "User.h"
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
   //UserCollection myUserCollection;
   vector<User> usersVector;
   bool bigCheck = true;
   bool smallCheck = true;

   while (bigCheck){
      cout << "Select: [Register, Login, Logout]" << endl;
      string topInput;
      cin >> topInput;
      if(topInput == "Register"){
         User myUser;
         myUser.setUsername();
         myUser.setPassword();
         usersVector.push_back(myUser);
        // myUserCollection.addToArray(myUser);

         //usersVector.push_back(myUser);
         /*
         cout << "Enter username: " << endl;
         cin >> userNameInput;
         cout << "Enter password: " << endl;
         cin >> passwordInput;
         Login loginUserObj(userNameInput, passwordInput);
         */
      }
      else if(topInput == "Login"){
        cout << "Enter Username: " << endl;
        string loginUsername;
        cin >> loginUsername;
                //myUser.userLogin()
        for(int i = 0; i < usersVector.size(); ++i) {
        if(usersVector.at(i).getUsername() == loginUsername) {
            cout << "Username is in system! " << endl;
            cout << "Enter password: " << endl;
            string loginPassword;
            cin >> loginPassword;
            if(usersVector.at(i).getPassword() == loginPassword) {
                cout << "Login Successful! Password matches username" << endl;
                cout << "Welcome " << usersVector.at(i).getUsername() << endl;
                ActivityCollection myActivityCollection;
                //usersVector.at(i).setActivityCollection();
                //ActivityCollection tempAC;
                //tempAC = usersVectors.at(i).getActivityCollection();
                while(smallCheck) {
                  cout << "Choose from ['Create' 'Display' 'Quit']" << endl;
                  string startingInput;
                  cin >> startingInput;

                  if (startingInput == "Create") {
                     // use vetor
                     //create new activity then add it to vector
                     
                     Activity myActivity; // empty contstructor 
                     myActivity.createActivity(); // populate here
                     //calendarVector.push_back(myActivity);
                     ActivityCollection myActivityCollection;
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
                     smallCheck = false;
                  }
               }
            }
        }
        else{
            cout << "Login unsuccessful" << endl;
        }
    }

         ActivityCollection myActivityCollection; // this should be created within each login
      }
      else if(topInput == "Logout"){
         bigCheck = false;
      }
   }



   return 0;
}
  
