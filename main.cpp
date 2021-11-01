#include "Activity.h"
#include"Venue.h"
#include"LinkedList.h"
#include "ActivityCollection.h"
#include "Login.h"
#include "User.h"
#include "Test.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
 //TODO: Destructor somewhere??

 // function to 

  
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
                //usersVector.at(i).setActivityCollection();
                //ActivityCollection tempAC;
                //tempAC = usersVectors.at(i).getActivityCollection();
                smallCheck = true;
                while(smallCheck) {
                  cout << "Choose from ['Create' 'Display' 'Quit']" << endl;
                  string startingInput;
                  cin >> startingInput;

                  if (startingInput == "Create") {
                     // use vetor
                     //create new activity then add it to vector
                     Activity myActivity; // empty contstructor 
                     myActivity.createActivity(); // populate here
                     usersVector.at(i).addActivity(myActivity); // copy constructor called here 
                  }
                  else if(startingInput == "Display"){
                     // call function print statments 
                        // how do i call the funtion? confused about what paramters go into it? can an object be a paramter?
                        usersVector.at(i).display();
                        // for(int i = 0; i < usersVector.at(i).getActivityCollection().getCount(); ++i) {
                        //    //cout << usersVector.at(i).getActivityCollection().displayArray(i) << endl;
                        // }
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
   }  // end of all while loops.
   // CP3 code begins here
   //LinkedList<Venue>;
   // Creates a new linked list on the heap. use destructor later
   LinkedList<Venue> *venueList = new LinkedList<Venue>(); 
   // use venueList
   string venueLine;
   ifstream VenueFile ("VenueFile.txt");
  if (VenueFile.is_open()) {
     while(getline(VenueFile, venueLine)){
        //cout << venueLine << endl;
        string str(venueLine);
        string tmp;
        stringstream str_strm(str);
        vector<string> words;
        string venueNameTemp;
        string venueCapacityTemp;
        string venueLocationTemp;
        while (str_strm >> tmp) {
           words.push_back(tmp);
        }
        for (int i = 0; i < 3; ++i) {
           venueNameTemp = words[0];
           venueCapacityTemp = words[1];
        }
        for (int j = 2; j < words.size(); ++ j) {
            venueLocationTemp += words[j] + " ";
         }
       //stringstream str_strm(venueNameTemp, venueCapacityTemp, venueLocationTemp);
       // stringstream ss;
       // string tmp; // a string to sore the word on each iteration
        
        //ss >> venueNameTemp >> venueCapacityTemp >> venueLocationTemp >> '\n';   
        cout << "New Venue info: " << endl;
        cout << "Venue Name: " << venueNameTemp << endl;
        cout << "Capacity: " << venueCapacityTemp << endl;
        cout << "Venue Location: " << venueLocationTemp << endl;
        cout << endl;

        // cast the capacity from string to int
        int venueCapacityTempInt;
        venueCapacityTempInt = stoi(venueCapacityTemp);
        
        //call venue constructor, works successfully
        Venue venueObj(venueNameTemp, venueCapacityTempInt, venueLocationTemp);
        venueList->append(venueObj);
        // append to linkedList
        //debug line
        //cout << endl << "PRINTING CAPACITY: " << venueObj.getCapacity() << endl << endl;

        //LinkedList<string> *words = new LinkedList<string>();
       // vector<string> words;
       /*
      // LinkedList<string> *words = new LinkedList<string>(); 
        while (str_strm >> tmp) {
           words->append(tmp);
        }
        */

        } 
     }

// overload a compareTo operator ??
// add to linkedinlist 
  //  Node *node = head;
       // while(node->next != nullptr) {
       //    cout << node->data << endl;
           // node = node->next;
           // advance the node ptr to the next one
           // make a ptr to the first one
           // print out data at that one
           // change that ptr to point to next one


   //venueList.append(venue);

   //*venueList.printLinkedListVenue();

   return 0;
}
  
