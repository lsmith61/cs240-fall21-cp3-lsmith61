#ifndef DATETIME_H
#define DATETIME_H

#include <string>
using namespace std;

class DateTime {
  private:

    string date;
    string time;

    int dateM;
    int dateD;
    int dateY;

    int timeH;
    int timeM;
    int timeS;

    bool notValidDate;
    bool notValidTime;

  public:
    DateTime() {};
    DateTime(string, string);
    DateTime(int, int, int, int, int, int);
    string createDateTime();
    string print();
};

#endif