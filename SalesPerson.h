#ifndef SALESPERSON_H_INCLUDED
#define SALESPERSON_H_INCLUDED
#include <iostream>
#include "Person.h"
using namespace std;

class SalesPerson:public Person{
private:
    string date_of_hire;
    double salary;
public:
    SalesPerson();
    SalesPerson(string,double,string,int,int,int);
    ~SalesPerson();
    string getdateofhire();
    double getsalary();
    void setdateofhire(string);
    void setsalary(double);
    void printinfo();




};



#endif // SALESPERSON_H_INCLUDED
