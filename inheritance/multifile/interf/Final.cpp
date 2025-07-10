#ifndef MAIN_H
#define MAIN_H
#include "HybridCar.h"
#include "Desiel.h"
#include "Petrolcar.h"

int main(){


        Car* cr = new Desiel();
        cr->engineStart();
       // Car::turnon();

        Petrolcar* r = new Petrolcar();
        r->status();
        delete cr;
        delete r;
}

#endif