#ifndef DESIEL_H
#define DESIEL_H
#include "Car.h"
class Desiel : virtual public Car {

	public:
		void info() override{
			std::cout<<"this is desile car from desile car function \n";
		}
};
#endif
