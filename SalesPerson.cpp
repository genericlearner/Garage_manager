#include "SalesPerson.h"
#include "Person.h"

SalesPerson::SalesPerson(){
    date_of_hire="";
    salary=0.0;

}
SalesPerson::SalesPerson(string doh,double salary_,string name_,int m,int d,int y):Person(name_,m,d,y){
date_of_hire=doh;
salary=salary_;
}
SalesPerson::~SalesPerson(){
    cout<<"Salesperson Object deleted"<<endl;
}

void SalesPerson::setdateofhire(string date){
date_of_hire=date;
}

void SalesPerson::setsalary(double sal){
salary=sal;}
string SalesPerson::getdateofhire(){
return date_of_hire;}
double SalesPerson::getsalary(){
return salary;}
void SalesPerson::printinfo(){
    printperson();
    cout<<"Date hiring: "<<getdateofhire()<<endl;
    cout<<"salary: "<<getsalary()<<endl;
}
