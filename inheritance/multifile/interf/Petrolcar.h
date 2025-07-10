#ifndef PETROLCAR_H
#define PETROLCAR_H
#include "Car.h"



class Petrolcar : virtual public Car{

    public:

    void status(){
        Car::turnon();
    }

    void engineStart() override{
        std::cout<<"Engine starts";
    }


    



};
#endif