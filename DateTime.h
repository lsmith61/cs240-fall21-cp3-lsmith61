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
    DateTime(){};
    DateTime(string date, string time) {
      this->date = date;
      this->time = time;
      string dateM_str = date.substr(0, 2);
      string dateD_str = date.substr(3, 2);
      string dateY_str = date.substr(6, 4);

      dateM = stoi(dateM_str);
      dateD = stoi(dateD_str);
      dateY = stoi(dateY_str);

      string timeH_str = time.substr(0, 2);
      string timeM_str = date.substr(3, 2);
      string timeS_str = date.substr(6, 2);

      timeH = stoi(timeH_str);
      timeM = stoi(timeM_str);
      timeS = stoi(timeS_str);
    }
    DateTime(int, int, int, int, int, int);
    string createDateTime();
    string print();
   // int getTimeInSeconds();
    //DateTime dateOperator;
   // DateTime operator-(DateTime rhs);
    DateTime elapsedDate();
    DateTime epoch(DateTime *totalEpochTime);
    DateTime& operator = (const DateTime& rhs); 
    friend ostream& operator<<(ostream& os, const DateTime& opDateTimeObj);

    // bool operator<(const DateTime &other);

};

#endif