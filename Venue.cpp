#include"Venue.h"
#include<iostream>
#include<sstream>
#include<string>
#include <iostream>
#include <fstream> 

<<<<<<< HEAD
ostream& operator<<(ostream& os, const Venue& opVenueObj) {
=======
 ostream& operator << (ostream& os, Venue& opVenueObj) {
>>>>>>> 255768aaa8cfd9784d32c1761a67fa5cfebc12af
    os << "Venue Name: " << opVenueObj.venueName << 
    " Capacity: " << opVenueObj.capacity <<
    " Location: " << opVenueObj.location << endl;
    return os;

 }

bool Venue::operator == (Venue& rhs) {
    Venue venueLHS;
    if(venueLHS.venueName == rhs.venueName) {
        // return True if the venueName already exists 
        return true;
    }
    else{
        // return false if this is the first instance of the venueName
        return false;
    }
 }


