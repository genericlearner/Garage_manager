#include "Client.h"

Client::Client():Person(){
    driving_licence="";
    type_of_car="";
}
Client::Client(string dl,string type,string name11,int m,int d,int y)
    :Person(name11,m,d,y){
        driving_licence=dl;
        type_of_car=type;
    }
Client::~Client(){
    cout<<"Client Object deleted"<<endl;
};
string Client::getdl(){
return driving_licence;}
string Client::gettype(){
return type_of_car;}
void Client::setdl(string dl){
driving_licence=dl;}
void Client::settype(string type){
type_of_car=type;}
void Client::print(){
    cout<<"driving license: "<<getdl()<<endl;
    cout<<"type of car: "<<gettype()<<endl;

}

