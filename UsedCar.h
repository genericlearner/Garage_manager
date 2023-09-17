#include <iostream>
#ifndef USEDCAR_H_INCLUDED
#define USEDCAR_H_INCLUDED
#include "NewCar.h"

class UsedCar:public NewCar{
    string manifacturer;
    int milage;
public:
    UsedCar();
    UsedCar(int,int,string,int,double,string,int);
    ~UsedCar();
    string getmanifacturer();
    int getmilage();
    void setmanifacturer(string);
    void setmilage(int);
    void printusedcar();



};



#endif // USEDCAR_H_INCLUDED
