#include "PurchaseContract.h"
#include <iostream>
using namespace std;


PurchaseContract::PurchaseContract(){
    this->carnew=nullptr;
    this->client=nullptr;
    this->personsale=nullptr;
    this->carused=nullptr;
}
PurchaseContract::~PurchaseContract(){
    cout<<"Purchase contract Object deleted"<<endl;
}
PurchaseContract::PurchaseContract(Client* client,SalesPerson* personsale,NewCar* carnew, Date date){
    this->carnew=carnew;
    this->carused=nullptr;
    this->client=client;
    this->personsale=personsale;
    date_of_purchase=date;
}
PurchaseContract::PurchaseContract(Client* client,SalesPerson* personsale,UsedCar* carused, Date date){
    this->carnew=nullptr;
    this->carused=carused;
    this->client=client;
    this->personsale=personsale;
    date_of_purchase=date;
}
void PurchaseContract::printcontractinfo(){
    cout<<"client: "<<client->getname()<<endl;
    cout<<"Salesperson: "<<personsale->getname()<<endl;
    if(carnew!=nullptr)
        cout<<carnew->Getid()<<endl;
    if(carused!=nullptr)
        cout<<carused->Getid()<<endl;
    date_of_purchase.printdate();
    cout<<endl;
}


int PurchaseContract::getnewcarid(){
    if(carnew!=nullptr)
        return carnew->Getid();
}
int PurchaseContract::getusedcarid(){
    if(carused!=nullptr)
        return carused->Getid();
}





