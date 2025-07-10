#include<iostream>
#include<string>
class Car{

	protected:
		std::string carName;
		double price;
		std::string model;
		int year;

	public:
		Car(std::string carName , double price, std::string model , int year){
		this-> carName = carName;
		this-> price = price;
		this-> model = model ;
		this-> year = year;
		
		}

		Car(){}

		virtual void display()=0;
	
		virtual ~Car(){}

};

class Electricle : virtual public Car{
	
	public:

	Electricle(std::string carName , double price , std::string model , int year):Car(carName , price , model , year){}
	


	void display() override{
		std::cout<<"Car Name : "<<carName<<"\n";
		std::cout<<"Car Price : "<<price<<"\n";
		std::cout<<"Model : "<<model<<"\n";
		std::cout<<"Year :"<<year<<"\n";
	
	
	}


};

class Petrol: virtual public Car{

	public:

		Petrol(){}
		Petrol(std::string carName , double price , std::string model , int year) : Car(carName , price , model , year){} 

		void display() override{
			std::cout<<"Pertol Car Name :"<<carName<<"\n";
			std::cout<<"Price : "<<price<<"\n";
			std::cout<<"Model :"<<model<<"\n";
			std::cout<<"Year Of Mnf :"<<year<<"\n";

		}

		double add(double a , double b){
		double result = a + b ;
		return result;
		
		}
		
};



	int main(){
	
	Car* car = new Electricle("Mahindra" , 4900, "Thar " , 2025); 
	//calss base pointing to derived class object using pointer 
	car-> display(); 
       	//here i use runtime polymoreprishm 
	

	std::cout<<"--------------------------------------------------------------------------------------------------------------------\n";
	Car* c1 = new Petrol("Audi" , 4500 , "S8" ,2024);
	c1->display();
	
	std::cout<<"--------------------------------------------------------------------------------------------------------------------\n";
	Petrol p("BMW" , 6000 ,"X3" , 2025);  // for that defualt const is needed 
	p.display();

	std::cout<<"--------------------------------------------------------------------------------------------------------------------\n";

	double a = p.add(10.55 , 20.45);
	std::cout<<"Static Method call : Add "<<a<<"\n";
	

	delete car;
	delete c1;
	
	//we can not write dirctly Car car(" m" , 45 , "dc" , 2025) because class Car is Abstract class we use virtual function

		// Electricle el("Mahindra" , 4900 , "Thar" , 2025);
		// el.display();
	return 0;
	
	}
