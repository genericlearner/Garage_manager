#include <iostream>
#include "Car.h"
#ifndef NEWCAR_H_INCLUDED
#define NEWCAR_H_INCLUDED
using namespace std;

class NewCar:public Car{
protected:
    int model_year;
    string color;
    int no_of_doors;
    double price;
public:
    NewCar();
    NewCar(int,int,string,int,double);
    ~NewCar();
    void setmodelyear(int);
    void setcolor(string);
    void setdoors(int);
    void setprice(double);
    int getmodelyear();
    string getcolor();
    int getdorrs();
    double getprice();
    void print();

};



#endif // NEWCAR_H_INCLUDED
