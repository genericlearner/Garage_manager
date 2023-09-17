#include <iostream>
#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
using namespace std;

class Date{
private:
    int month,day,year;
public:
    Date();
    Date(int,int,int);
    ~Date();
    void setmonth(int);
    void setday(int);
    void setyear(int);
    int getmonth();
    int getyear();
    int getday();
    void setdate(int,int,int);
    void printdate();

};



#endif // DATE_H_INCLUDED
