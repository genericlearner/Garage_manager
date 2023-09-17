#include <iostream>
#include "Client.h"
#include "NewCar.h"
#include "Car.h"
#include "Date.h"
#include "Person.h"
#include "SalesPerson.h"
#include "UsedCar.h"
#include "dataManager.h"
using namespace std;
int main(){
    //creating objects for each class and inserting
    dataManager* datamanager=new dataManager();
    NewCar* NewCars[4];
    NewCars[0]=new NewCar(500151,2015,"yellow",5,60000);
    NewCars[1]=new NewCar(536911,2016,"Red",4,90000);
    NewCars[2]=new NewCar(519190,2021,"White",3,80000);
    NewCars[3]=new NewCar(519999,2022,"Blue",2,70000);
    Client* clients[7];
    clients[0]=new Client("4abcd","honda","John",9,10,2002);
    clients[1]=new Client("69bdc","honda","Murphy",9,10,2002);
    clients[2]=new Client("67hii","honda","Clarke",9,10,2002);
    clients[3]=new Client("400bdc","honda","Benjamin",9,10,2002);
    clients[4]=new Client("50cde","honda","Lincoln",9,10,2002);
    clients[5]=new Client("6041ee","honda","Octavia",9,10,2002);
    clients[6]=new Client("65eee","honda","Monty",9,10,2002);
    SalesPerson* salespersons[6];
    salespersons[0]=new SalesPerson("7th of October 2022",5000,"Jonah",4,5,2002);
    salespersons[1]=new SalesPerson("10th of October 2022",7000,"Lil Baby",6,10,2001);
    salespersons[2]=new SalesPerson("22th of October 2022",9000,"Tyler",6,19,1992);
    salespersons[3]=new SalesPerson("16th of October 2022",1000,"Abel",7,20,1995);
    salespersons[4]=new SalesPerson("20th of October 2022",3000,"Drake",12,25,1998);
    salespersons[5]=new SalesPerson("19th of October 2022",4000,"Jason",6,20,1999);
    Date date[7];
    date[0]= Date(9,10,2022);
    date[1]= Date(10,20,2022);
    date[2]= Date(10,9,2022);
    date[3]= Date(2,22,2022);
    date[4]= Date(6,25,2022);
    date[5]= Date(7,29,2022);
    date[6]= Date(8,25,2022);

    UsedCar* Usedcars[10];
    Usedcars[0]=new UsedCar(40204345,2013,"yellow",5,60000,"Honda",5000);
    Usedcars[1]=new UsedCar(4020434,2010,"yellow",5,20000,"bmw",6000);
    Usedcars[2]=new UsedCar(4020436,2020,"white",5,3000,"toyota",10000);
    Usedcars[3]=new UsedCar(4020463,2021,"black",5,50000,"volkswagen",20000);
    Usedcars[4]=new UsedCar(4020968,2013,"Red",5,8000,"Hyundai",8000);
    Usedcars[5]=new UsedCar(4020546,2012,"Purple",5,90000,"General Motors",15000);
    Usedcars[6]=new UsedCar(0434645,2016,"White",5,55000,"Nissan",12000);
    Usedcars[7]=new UsedCar(4020485,2017,"Dark green",5,66000,"Suzuki",3000);
    Usedcars[8]=new UsedCar(4020489,2019,"Grey",5,60600,"Ford",21000);
    Usedcars[9]=new UsedCar(4020255,2018,"Dark yellow",5,56000,"Renault",190000);
    PurchaseContract* PurchaseContracts[5];
    Date dates(10,12,2022);
    PurchaseContracts[0]=new PurchaseContract(clients[0],salespersons[0],NewCars[0],date[0]);
    PurchaseContracts[1]=new PurchaseContract(clients[1],salespersons[1],Usedcars[1],date[1]);
    PurchaseContracts[2]=new PurchaseContract(clients[2],salespersons[2],NewCars[2],date[2]);
    PurchaseContracts[3]=new PurchaseContract(clients[3],salespersons[3],Usedcars[2],date[3]);
    PurchaseContracts[4]=new PurchaseContract(clients[4],salespersons[4],Usedcars[3],date[4]);

    for(int i=0;i<5;i++){
        datamanager->insertPurchaseContract(PurchaseContracts[i]);
    }
    for(int i=0;i<6;i++){
        datamanager->insertSalesPerson(salespersons[i]);
    }
    for(int i=0;i<4;i++){
        datamanager->insertNewCar(NewCars[i]);
    }
    for(int i=0;i<10;i++){
        datamanager->insertUsedCar(Usedcars[i]);
    }
cout<<"Printing contracts: "<<endl;
datamanager->printcontracts();
cout<<"Printing Inventory: "<<endl;
datamanager->printinventory();
datamanager->printAge(5);
datamanager->printMilage(7000);
datamanager->checkavailability(*NewCars[0]);
    datamanager->checkavailability(*Usedcars[1]);
for(int i=0;i<10;i++){
    if(Usedcars[i]!=nullptr)
        delete Usedcars[i];
}
for(int i=0;i<4;i++){
    if(NewCars[i]!=nullptr)
        delete NewCars[i];
}
for(int i=0;i<7;i++){
    if(clients[i]!=nullptr)
        delete clients[i];
}
for(int i=0;i<6;i++){
    if(salespersons[i]!=nullptr)
        delete salespersons[i];
}
for(int i=0;i<5;i++){
    if(PurchaseContracts[i]!=nullptr)
        delete PurchaseContracts[i];
}
}
