#include "DateTime.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
 
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
            notValidDate = false;
            cout << "Date format is good!" << endl;
        }
    }

    bool notValidTime = true;
    while(notValidTime) {
        cout << "Enter Time [HH:MM:SS]" << endl;
        cin >> time;
        if(time[2] != ':' || time[5] != '-'){
            notValidTime = false;
            cout << "Improper time format" << endl;
        }
        else if(!isdigit(time[0] || time[1])){
            
        } 
    }


     return " [" + date + " " + time + "] ";

    /*cout << "Enter Month [mm]: " << endl;
    cin >> dateM;
    if(dateM >= 12 ) {
        cout << "Month not valid";
    }
    cout << "Enter Day of Month [dd]: " << endl;
    cin >> dateD;
    cout << "Enter Year [yyyy]: " << endl;
    cin >> dateY;
    */

   // date = to_string(dateM) + "-" + to_string(dateD) + "-" + to_string(dateY);
   // date 
    //date = dateM + "-" + dateD + "-" + dateY;

  //  istringstream inSS(date);
   // inSS >> dateM;
   // inSS >> dateD;
   // inSS >> dateY;

    /*size_t pos = 0;
    string sparse = date;
    string delimiter = "-";
    string token; */

   /* while((pos = sparse.find(delimeter) != string::npos)) {
        token = sparse.substr(0, pos);
        cout << token << endl;
        sparse.erase + delimeter.length());
    }*/

    
    /*cout << "Enter hour [hh]: " << endl;
    cin >> timeH;
    if(timeH >= 24 ) {
        cout << "Hour not valid";
    }
    cout << "Enter minute [mm]: " << endl;
    cin >> timeM;
    cout << "Enter second [ss]: " << endl;
    cin >> timeS;

    cout << "hello";

    time = to_string(timeH) + "-" + to_string(timeM) + "-" + to_string(timeS);
    */
   // if(getline(date, parsed,"-")) {
    /*ss.str(date);
    ss >> dateM;
    */

   /* 
    cout  << "Enter Hour: " << endl;
    cin >> timeH;
    cout << "Enter Minute: " << endl;
    cin >> timeM;
    cout << "Enter Second: " << endl;
    cin >> timeS;
    */

   // time = timeH + ":" + timeM  + ":" + timeS;
    
   

}

string DateTime::print() {
    return "Date: " + date + ", Time: " + time;
 

}

