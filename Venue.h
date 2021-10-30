#ifndef VENUE_H
#define VENUE_H
#include <string>
#include <vector>
#include "DateTime.h"

using namespace std;

class Venue {
    private:
        string venueName;
        string location;
        int capacity;

    public:
        // empty constructor 
        Venue();
        //value  constructor 
        Venue(string venueName, int Capacity, string Location){this->venueName = venueName; this->location = location; this->capacity = capacity;};
        
        // venue operartor overloading equals 
};



#endif