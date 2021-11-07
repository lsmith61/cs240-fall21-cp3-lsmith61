#include "Activity.h"
#include "Venue.h"
#include "LinkedList.cpp"
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

  
int main() { 
   // CP3 code begins here
   // Creates a new linked list on the heap. use destructor later
  
  // Linked Lists Declarations
   LinkedList<Venue> *venueList = new LinkedList<Venue>(); 
   LinkedList<User> *userList = new LinkedList<User>(); 
   // VENUE FILE    
  
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

        // cast the capacity from string to int
        int venueCapacityTempInt;
        venueCapacityTempInt = stoi(venueCapacityTemp);
        
        //call venue constructor, works successfully
        Venue venueObj(venueNameTemp, venueCapacityTempInt, venueLocationTemp);
         if(venueList->find(venueObj) == false){
           venueList->append(venueObj);           
        } 
        } 
     }
     string venueFileName;
     venueFileName = "VenueOut.txt";
    // venueList->outputLinkedList(venueFileName);


     // USER TXT FILE
   string userLine;
   ifstream userFile ("UserFile.txt");
  if (userFile.is_open()) {
     while(getline(userFile, userLine)){
        //cout << venueLine << endl;
        string strUser(userLine);
        string tmpUser;
        stringstream str_strmUser(strUser);
        vector<string> wordsUser;
        string userID;
        string userFirstname;
        string userLastname;
       // ss >> userID >> userFirstname >> userLastname;

        while (str_strmUser >> tmpUser) {
           wordsUser.push_back(tmpUser);
        }
        for (int i = 0; i < 3; ++i) {
           userID = wordsUser[0];
           userFirstname = wordsUser[1];
        }
        for (int j = 2; j < wordsUser.size(); ++ j) {
            userLastname += wordsUser[j] + " ";
        }
        
        //call venue constructor, works successfully
        User userObj(userID, userFirstname, userLastname);
        cout << "Passed in" << userObj << endl;
        if(userList->find(userObj) == false){
            userList->append(userObj);           
        } 
      } 
   }
     string userOutputFile;
     userOutputFile = "UserOut.txt";
     userList->outputLinkedList(userOutputFile);

   return 0;
}
  
