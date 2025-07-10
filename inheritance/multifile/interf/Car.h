#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string>
class Car{

	public:
		virtual void engineStart() = 0;

		static void turnon(){
		
			std::cout<<"Key inserted.."<<"\n";
		} 

virtual ~Car(){}
};


#endif
