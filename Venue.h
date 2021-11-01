#ifndef VENUE_H
#define VENUE_H
#include <string>
#include <vector>
#include "DateTime.h"

using namespace std;

class Venue {
    private:
        string venueName;
        int capacity;
        string location;

    public:
        // empty constructor 
        Venue();
        //value  constructor 
        Venue(string venueName, int capacity, string location){
            this->venueName = venueName; 
            this->location = location; 
            this->capacity = capacity;
            };
        string getVenueName() {return venueName; };
        int getCapacity() {return capacity; };
        string getLocation() {return location; };
        // venue operator overloading equals 
};



#endif