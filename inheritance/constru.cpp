#include<iostream>
#include<string>
class Constru{
	private:
		std::string name ;
		int number ;
		double sal ;

	public:
		Constru(std::string n , int num )
		{
		
		this-> name = n;
		this-> number = num ;
		this-> sal= 0;

		}
		//ctor overloading --->  define  multiple ctor in same class and same scope  with differnet parameters  

		Constru(int number , double sal){
		this-> name = "unk";
		this-> number = number;
		this-> sal = sal ;
		
		}


		Constru(double sal){
		
		this-> sal = sal;
		}

		void display(){
		
		        std::cout<<"name :"<<name<<"\n";
			std::cout<<"number :"<<number<<"\n";
			std::cout<<"salary :"<<sal<<"\n";
		}

};


	int main(){
		
		Constru c(10 , 11.12);
		c.display();

	
	return 0;
	}
