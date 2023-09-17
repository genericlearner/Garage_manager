#include "NewCar.h"

NewCar::NewCar():Car(){
    model_year=0;
    color="";
    no_of_doors=0;
    price=0;
}
NewCar::~NewCar(){
    cout<<"Newcar Object deleted"<<endl;
}
NewCar::NewCar(int id1,int mody,string col,int doors,double price_):Car(id1){
model_year=mody;
color=col;
no_of_doors=doors;
price=price_;
}
void NewCar::setcolor(string col){
    color=col;
}
void NewCar::setdoors(int doors){
no_of_doors=doors;}
void NewCar::setmodelyear(int year){
model_year=year;}
void NewCar::setprice(double price_){
price=price_;}
int NewCar::getdorrs(){
return no_of_doors;}
int NewCar::getmodelyear(){
return model_year;}
string NewCar::getcolor(){
return color;}
double NewCar::getprice(){
return price;}
void NewCar::print(){
    cout<<"Car ID: "<<Getid()<<endl;
                cout<<"color: "<<getcolor()<<endl;
                cout<<"No of doors: "<<getdorrs()<<endl;
                cout<<"Car model year: "<<getmodelyear()<<endl;
                cout<<"Car price: "<<getprice()<<endl;
                cout<<endl;
}


