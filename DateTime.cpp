#include "DateTime.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
 
string DateTime::createDateTime() {
    cout << "Enter Date [MM-DD-YYYY]" << endl;
    cin >> date;

    cout << "Enter Time [HH:MM:SS]" << endl;
    cin >> time;

    return " [" + time + " " + date + "] ";

}

string DateTime::print() {
    return "Date: " + date + ", Time: " + time;
 

}

