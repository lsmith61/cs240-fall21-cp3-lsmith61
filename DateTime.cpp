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
            else if(dateD > 31) {
                notValidDate = true;
                cout << "Day of month not valid. Enter in {dd} form" << endl;
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
                cout << "Date format is good!" << endl;
            }
        }
    }

    return " [" + date + " " + time + "] ";
   // return date + time + dateM + dateD + dateY + timeH + timeM + timeS;
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

