#ifndef DATETIME_H
#define DATETIME_H

#include <string>
using namespace std;

class DateTime {
  private:
    string date;
    string time;

  public:
    DateTime() {};
    DateTime(string, string);
    string createDateTime();
    string print();
};

#endif