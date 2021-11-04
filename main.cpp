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

   // VENUE FILE    
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
     venueList->outputLinkedList(venueFileName);

   return 0;
}
  
