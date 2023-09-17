#include <iostream>
#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
using namespace std;

class Car{
    protected:
    int unique_id;
    public:
        Car();
        Car(int);
        ~Car();
        //print function below
        const int Getid() const;
        void setid(int);


};


#endif // CAR_H_INCLUDED
