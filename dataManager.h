#ifndef DATAMANAGER_H_INCLUDED
#define DATAMANAGER_H_INCLUDED
#include <iostream>
#include "NewCar.h"
#include "UsedCar.h"
#include "SalesPerson.h"
#include "PurchaseContract.h"


using namespace std;


class dataManager{
    private:
    NewCar* newcarArray[50];
    UsedCar* usedcarArray[200];
    SalesPerson* salespersonArray[10];
    PurchaseContract* pcontractArray[100];
    public:
    dataManager();
    ~dataManager();
    bool insertSalesPerson(SalesPerson* salesperson);
    bool insertNewCar(NewCar* newcar);
    bool insertUsedCar(UsedCar* usedcar);
    bool insertPurchaseContract(PurchaseContract* purchcontract);
    bool checkavailability(NewCar &newcar);
    bool checkavailability(UsedCar &usedcar);
    void printAge(int);
    void printMilage(int);
    void printcontracts();
    void printinventory();


};



#endif // DATAMANAGER_H_INCLUDED
