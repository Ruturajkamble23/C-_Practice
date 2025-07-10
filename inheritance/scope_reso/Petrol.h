#ifndef PETROL_H
#define PETROL_H
class Petrol : virtual public Car{

	public:
		void info() override{
			std::cout<<"petrol car from petrol car \n";
		}


};

#endif
