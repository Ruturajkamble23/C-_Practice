#ifndef HYBRID_H
#define HYBRID_H
#include "Desiel.h"
#include "Petrolcar.h"



class Hybrid : public Desiel ,  public Petrolcar{

    public:
        void display(){
            std::cout<<"dimod problem solving : ";

        }

         void engineStart(){
            std::cout<<"hybrid start  "<<"\n";
        }

        void hb(){
            Car::turnon();
        }
};

#endif