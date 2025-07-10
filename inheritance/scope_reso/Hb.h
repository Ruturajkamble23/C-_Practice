#ifndef HB_H
#define HB_H
#include "Desiel.h"
#include "Petrol.h"

class Hb : public Desiel , public Petrol{
	public:
		void info() override{
			std::cout<<"this is hybrid car from Hybrid cars  \n";
		}
};

#endif
