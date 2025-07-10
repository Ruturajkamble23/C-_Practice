#include<iostream>
#include<string>

class Basic{

	public:

	void display(){
		std::cout<<"Hello\n";
	}

}; 

int main(void){

		Basic b;
		b.display();
	int age = 20;
	int* ptr = &age;


	std::cout<<"age :"<<age<<std::endl;
	std::cout<<"ptr :"<<*ptr<<std::endl;
	std::cout<<"Adress :"<<&age<<std::endl;

	return 0;

	}
