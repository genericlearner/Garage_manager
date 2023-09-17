#include "Car.h"

Car::Car(){
    this->unique_id=0;
}
Car::Car(int id){
    this->unique_id=id;
}
Car::~Car(){
}
const int Car::Getid()const{
    return this->unique_id;
}
void Car::setid(int id_){
    this->unique_id=id_;
}
