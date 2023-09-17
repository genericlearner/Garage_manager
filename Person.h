
#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include<iostream>
#include "Date.h"

using namespace std;

class Person{
    protected:
    string name;
    Date date_of_birth;
    public:
        Person();
        Person(string,int,int,int);
        ~Person();
        string getname();
        Date printdob();
        void printperson();
};



#endif // PERSON_H_INCLUDED
