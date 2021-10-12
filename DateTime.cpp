#include "DateTime.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

/*
DateTime::DateTime() {
    minsInSecondsMulti = 60;
    hoursInSecondsMulti = 3600;
    daysInSecondsMulti = 86400;
    yearInSecondsMulti = 31536000;
}
*/
DateTime::DateTime(int dateM, int dateD, int dateY, int timeH, int timeM,int timeS) {
    this->dateM = dateM;
    this->dateD = dateD;
    this->dateY = dateY;
    this->timeH = timeH;
    this->timeM = timeM;
    this->timeS = timeS;
}

string DateTime::createDateTime() {

    std::istringstream ss;
   
    bool notValidDate = true;
    while(notValidDate){
        cout << "Enter Date [MM-DD-YYYY]" << endl;
        cin >> date;
        if(date[2] != '-' || date[5] != '-'){
            cout << to_string(date[2]);
            notValidDate = true;
            cout << "Improper format" << endl;
        }
        else if(!isdigit(date[0]) || !isdigit(date[1])) {
            notValidDate = true;
            cout << "Month not valid" << endl;
        }
        else if(!isdigit(date[3]) || !isdigit(date[4])) {
            notValidDate = true;
            cout << "day of month not valid" << endl;
        }
        else if(!isdigit(date[6]) || !isdigit(date[7]) || !isdigit(date[8]) || !isdigit(date[9]))  {
             notValidDate = true;
             cout << "year is not valid" << endl;
        }
        else{
            string dateM_str = date.substr(0, 2);
            string dateD_str = date.substr(3, 2);
            string dateY_str = date.substr(6, 4);

            dateM = stoi(dateM_str);
            dateD = stoi(dateD_str);
            dateY = stoi(dateY_str);
            if(dateM  > 12 ){
               notValidDate = true;
               cout << "Month not valid. Enter month in {mm} form" << endl;
            }
            else if(dateD > 30) {
                notValidDate = true;
                cout << "Day of month not valid. This month does not have more than 30 days."  << endl;
            }
            else{
                notValidDate = false;
                cout << "Date format is good!" << endl;
            }
        }
    }


    bool notValidTime = true;
    while(notValidTime) {
        cout << "Enter Time [HH:MM:SS]" << endl;
        cin >> time;
        if(time[2] != ':' || time[5] != ':'){
            notValidTime = true;
            cout << "Improper time format" << endl;
        }
        else if(!isdigit(time[0]) || !isdigit(time[1])){
            notValidTime = true;
            cout << "Hour is not valid" << endl;
        } 
        else if(!isdigit(time[3]) || !isdigit(time[4])){
            notValidTime = true;
            cout << "Minute is not valid" << endl;
        } 
        else if(!isdigit(time[6]) || !isdigit(time[7])){
            notValidTime = true;
            cout << "Second is not valid" << endl;
        } 
        else{
            string timeH_str = time.substr(0, 2);
            string timeM_str = date.substr(3, 2);
            string timeS_str = date.substr(6, 2);

            timeH = stoi(timeH_str);
            timeM = stoi(timeM_str);
            timeS = stoi(timeS_str);
            if(timeH > 23){
                notValidTime = true;
                cout << "Hour is not valid. Enter in {hh} format" << endl;
            }
            else if(timeM > 59){
                notValidTime = true;
                cout << "Minute is not valid. Enter in {mm} format" << endl;
            }
            else if(timeS > 59){
                notValidTime = true;
                cout << "Second is not valid. Enter in {ss} format" << endl;
            }
            else{
                notValidTime = false;
                cout << "Date format is good" << endl;
            }
        }
    }
    // check time date here 
    // 
    return " [" + date + " " + time + "] "; 
}
    /*
    // implement - turn this into an epoch 
    secondsEpoch = timeS;
    minutesEpoch = timeM * 60;
    hoursEpoch = 60 * 60;
    daysEpoch = 24 * 60 * 60;
    monthsEpoch = 
    
    //continue this  
    */


/*
int DateTime::getTimeInSeconds() {
    // convert this
    // seconds since 01/01/1900 00:00:00am
    // put this in construc
   //minsInSeconds = mins * minsInSecondsMulti;
    hoursInSeconds = hours * hoursInSecondsMulti;
    daysInSeconds = days * daysInSecondsMulti;
    yearsInSeconds = years * yearInSecondsMulti;  
    
   //minsInSeconds = 0;
   //cout << minsInSeconds << endl;
   minsInSeconds = timeM * minsInSecondsMulti;

   hoursInSeconds = timeH * hoursInSecondsMulti;
   daysInSeconds = dateD * daysInSecondsMulti;
   yearsInSeconds = dateY * yearInSecondsMulti;

  // monthsInSeconds = 31 * 86400;


    if(dateM == 4 || dateM == 6 || dateM == 10) {
        monthsInSeconds = 30 * daysInSecondsMulti; 
    }
    else if(dateM == 2){
        monthsInSeconds = 28 * daysInSecondsMulti;
    }
    else{
        monthsInSeconds = 31 * daysInSecondsMulti;
    }
    

    totalSeconds = seconds + minsInSeconds + hoursInSeconds + daysInSeconds + monthsInSeconds + yearsInSeconds;
    return totalSeconds;
} 



bool DateTime::operator<(const DateTime &end){
    //return timeTotal < end.timeTotal;
    // this is the same as line 141
    //getTimeInSeconds();
    //cout << totalSeconds;
   // cout << 
    if(totalSeconds < end.totalSeconds) {
        return true;
    }
    else{
        cout << "End Date/Time is prior to begin Date/Time" << endl;
        return false;
    }
}

*/

string DateTime::print() {
    return "Date: " + date + ", Time: " + time;
 

}

