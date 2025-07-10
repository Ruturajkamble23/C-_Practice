#ifndef DCAR_H
#define DCAR_H
#include "Car.h"


class Desiel : virtual public Car{
    public:

        void sta(){
            std::cout<<"Desiel Car ";

        }

         void engineStart() override{
            std::cout<<"Engine start from Desiel car "<<"\n";
        }

        void dd(){
            Car::turnon();
        }
};
#endif