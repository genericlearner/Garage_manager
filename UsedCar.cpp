#include "UsedCar.h"

UsedCar::UsedCar():NewCar(){
    manifacturer="";
    milage=0;
}
UsedCar::UsedCar(int id1,int mody,string col,int doors,double price_,string manu,int mil)
:NewCar(id1,mody,col,doors,price_){
    manifacturer=manu;
    milage=mil;
}
UsedCar::~UsedCar(){
cout<<"Used car Object deleted"<<endl;}
string UsedCar::getmanifacturer(){
return manifacturer;}
int UsedCar::getmilage(){
return milage;}
void UsedCar::setmanifacturer(string manii){
manifacturer=manii;}
void UsedCar::setmilage(int milage_){
milage=milage_;}


void UsedCar::printusedcar(){
                cout<<"Car ID: "<<Getid()<<endl;
                cout<<"color: "<<getcolor()<<endl;
                cout<<"No of doors: "<<getdorrs()<<endl;
                cout<<"Car model year: "<<getmodelyear()<<endl;
                cout<<"Car price: "<<getprice()<<endl;
            cout<<"Car Milage: "<<getmilage()<<endl;
            cout<<endl;
}
