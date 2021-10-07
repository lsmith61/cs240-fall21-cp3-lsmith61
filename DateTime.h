#ifndef DATETIME_H
#define DATETIME_H

#include <string>
using namespace std;

class DateTime {
  private:
  /*
    const int minsInSecondsMulti;
    const int hoursInSecondsMulti;
    const int daysInSecondsMulti;
    const int yearInSecondsMulti;
    */
    string date;
    string time;

    int initialDateTime;

    int dateM;
    int dateD;
    int dateY;

    int timeH;
    int timeM;
    int timeS;

    bool notValidDate;
    bool notValidTime;

    int timeTotal;
    // DateTime dateTotal;

    int seconds;
    int minsInSeconds;
    int hoursInSeconds;
    int daysInSeconds;
    int monthsInSeconds;
    int yearsInSeconds;
    int totalSeconds;



  public:
    DateTime() {};
    DateTime(string, string);
    DateTime(int, int, int, int, int, int);
    string createDateTime();
    string print();
    int getTimeInSeconds();
    //DateTime dateOperator;
   // DateTime operator-(DateTime rhs);
    DateTime elapsedDate();
    DateTime epoch(DateTime *totalEpochTime);
    bool operator<(const DateTime &other);

};

#endif