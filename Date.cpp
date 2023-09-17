#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(){
    int month=0;
    int day=0;
    int year=0;
}
Date::Date(int month_,int day_,int year_){
month=month_;
day=day_;
year=year_;}
Date::~Date(){
    cout<<"Date Object deleted"<<endl;
}

void Date::setday(int d){
day=d;}
void Date::setmonth(int m){
month=m;}
void Date::setyear(int ye){
year=ye;}
int Date::getday(){
return day;}
int Date::getmonth(){
return month;}
int Date::getyear(){
return year;}
void Date::setdate(int m,int d,int y){
    month=m;
    day=d;
    year=y;
}
void Date::printdate(){
    cout<<getmonth()<<"/"<<getday()<<"/"<<getyear()<<endl;
}

