#include "dataManager.h"
#include <iostream>

using namespace std;
dataManager::~dataManager(){

cout<<"datamanager Object deleted"<<endl;}

dataManager::dataManager(){
    for(int i=0;i<50;i++){
        newcarArray[i]=nullptr;
    }
    for(int i=0;i<200;i++){
        usedcarArray[i]=nullptr;
    }
    for(int i=0;i<10;i++){
        salespersonArray[i]=nullptr;
    }
    for(int i=0;i<100;i++){
        pcontractArray[i]=nullptr;
    }
}

bool dataManager::insertSalesPerson(SalesPerson* salesperson){
    for (int i = 0; i < 10; i++)
	{
		if (salespersonArray[i] == nullptr)
		{
			salespersonArray[i] = salesperson;
            cout << "Salesperson " << salesperson->getname() << " added to the salesperson array" << endl;
			return true;
		}
	}
	cout << "Salesperson array already full" << salesperson->getname() << endl;
	return false;
}
bool dataManager::insertNewCar(NewCar* newcar){
     for (int i = 0; i<50; i++)
	{
		if (newcarArray[i] == nullptr)
		{
			newcarArray[i] = newcar;
            cout << "The new car with ID" << newcar->Getid() << " added to the newcar array" << endl;
			return true;
		}
	}
	cout << "Newcar array is already full cannot add car with ID: " << newcar->Getid()<< endl;
	return false;
}
bool dataManager::insertUsedCar(UsedCar* usedcar){
     for (int i = 0; i<200; i++)
	{
		if (usedcarArray[i] == nullptr)
		{
			usedcarArray[i] = usedcar;
            cout << "The used car with ID" << usedcar->Getid() << " added to the usedcar array" << endl;
			return true;
		}
	}
	cout << "Usedcar array is already full cannot add car with ID: " << usedcar->Getid()<< endl;
	return false;
}
bool dataManager::insertPurchaseContract(PurchaseContract* purchasecontract){
     for (int i = 0; i<100; i++)
	{
		if (pcontractArray[i] == nullptr)
		{
			pcontractArray[i] = purchasecontract;
            cout << "The purchase contract added to purchase contract array" << endl;



			return true;
		}
	}


	cout << "The purchase contract array is already full cannot add another purchase contract"<< endl;
	return false;
}
bool dataManager::checkavailability(NewCar& newcar){
    for(int i =0;i<50;i++){
        if(newcarArray[i]!=nullptr){
            if(newcarArray[i]->getmodelyear()==newcar.getmodelyear()&&newcarArray[i]->getcolor()==newcar.getcolor()){
                cout<<"New Car with the color  "<<newcar.getcolor()<<" and model year "<<newcar.getmodelyear()<<" available, Car ID: "<<newcarArray[i]->Getid()<<endl;

            }
        }
        return true;
    }
    cout<<"There is no new car available with the mentioned color and model year"<<endl;
    return false;
}
bool dataManager::checkavailability(UsedCar& usedcar){
    int counter=0;
    for(int i =0;i<50;i++){
        if(usedcarArray[i]!=nullptr){
            if(usedcarArray[i]->getmodelyear()==usedcar.getmodelyear()&&usedcarArray[i]->getcolor()==usedcar.getcolor()){
                cout<<"Used Car with the color "<<usedcar.getcolor()<<" and model year "<<usedcar.getmodelyear()<<" available, Car ID:"<<usedcarArray[i]->Getid()<<endl;

      counter++;
            }

        }
    }
    if(counter!=0){
        return true;
    }
    cout<<"There is no used car available with the mentioned color and model year"<<endl;
    return false;
}
void dataManager::printAge(int age){
    int counter=0;
    for(int i=0;i<200;i++){
        if(usedcarArray[i]!=nullptr){
            if(2022-usedcarArray[i]->getmodelyear()<=age){
                    cout<<"Car under the age: "<<age<<endl;
                    usedcarArray[i]->printusedcar();
                    counter++;
            }
        }

    }
    if(counter==0)
    cout<<"There is no used car under that age"<<endl;
}




void dataManager::printMilage(int mil){
    int counter=0;
    for(int i=0;i<200;i++){
        if(usedcarArray[i]!=nullptr){
            if(usedcarArray[i]->getmilage()<mil){
                    cout<<"Cars under the milage: "<<mil<<endl;
                 usedcarArray[i]->printusedcar();
                 counter++;
            }
        }

    }
    if(counter==0)
    cout<<"There is no used car under "<<mil<<" milage"<<endl;
}
void dataManager::printcontracts(){
    for(int i=0;i<100;i++){
        if(pcontractArray[i]!=nullptr){
            pcontractArray[i]->printcontractinfo();
        }
    }
}
void dataManager::printinventory(){
    cout<<"New cars in inventory:"<<endl;
    for(int i=0;i<50;i++){
        if(newcarArray[i]!=nullptr){
            newcarArray[i]->print();
        }
    }
    cout<<endl;
    cout<<"Used cars in inventory: "<<endl;
    for(int i=0;i<100;i++){
        if(usedcarArray[i]!=nullptr){
            usedcarArray[i]->printusedcar();
        }
    }
}



