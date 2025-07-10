#include<iostream>
#include<string>
class En{
	private:
		std::string name ;
		double salary;
		std::string work;
	public:
		std::string getName(){
		return name ;
		}

		void setName(std::string name){
		this->name = name;
		}

		double getSalary(){
		return salary;
		}

		void setSalary(double salary){
		
		this -> salary = salary;
		}

		std::string getWork(){
		
		return work;
		}

		void setWork(std::string work){
			this -> work = work;
		
		}

		void display(){
		
			std::cout<<"Name :"<<name<<std::endl;
			std::cout<<"salary :"<<salary<<std::endl;
			std::cout<<"work : "<<work<<std::endl;
		}


};


	int main(){
	
	En en;
	en.setName("Ruturaj");
	en.setSalary(50000.00);
	en.setWork("Software Engineer");
	
	en.display();
	}
