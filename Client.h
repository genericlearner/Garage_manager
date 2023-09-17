#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED
#include <iostream>
#include "Person.h"
using namespace std;


class Client: public Person{
private:
    string driving_licence;
    string type_of_car;
public:
    Client();
    Client(string,string,string,int,int,int);
    ~Client();
    void setdl(string);
    void settype(string);
    string gettype();
    string getdl();
    void print();


};



#endif // CLIENT_H_INCLUDED
