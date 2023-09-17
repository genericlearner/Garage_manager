#ifndef PURCHASECONTRACT_H_INCLUDED
#define PURCHASECONTRACT_H_INCLUDED
#include <iostream>
#include "Client.h"
#include "SalesPerson.h"
#include "NewCar.h"
#include "UsedCar.h"
#include "Date.h"
using namespace std;

class PurchaseContract{
    private:
    Client* client;
    SalesPerson* personsale;
    NewCar* carnew;
    UsedCar* carused;
    Date date_of_purchase;
    public:
        PurchaseContract();
        PurchaseContract(Client* client,SalesPerson* personsale,NewCar* carnew,Date);
        PurchaseContract(Client* client,SalesPerson* personsale,UsedCar* carused, Date date);
        ~PurchaseContract();
        void setclient(Client*);
        void setsalesperson(SalesPerson*);
        void setnewcar(NewCar*);
        void setusedcar(UsedCar*);
        void setdob(Date);
        int getnewcarid();
        int getusedcarid();
        void printcontractinfo();
        void getusedcar();
        void getnewcar();


};


#endif // PURCHASECONTRACT_H_INCLUDED
