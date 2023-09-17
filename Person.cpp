#include "Person.h"
Person::Person(){
    name="";

}

Person::Person(string n,int m,int d,int y){
    name=n;
    date_of_birth.setdate(m,d,y);
}
Person::~Person(){
    cout<<"Person Object deleted"<<endl;
}

string Person::getname(){
return name;}
Date Person::printdob(){
    date_of_birth.printdate();
}
void Person::printperson(){
    cout<<"Name: "<<getname();
    date_of_birth.printdate();
}

