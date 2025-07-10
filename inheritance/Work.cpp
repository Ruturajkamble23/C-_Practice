#include<iostream>
#include<string>
class Work{



	private:
		std::string name;
		int age;
		std::string works;
	public:
		Work(std::string name, int age , std::string works)
		{
		this-> name = name;
		this-> age = age;
		this-> works= works;
		
		}

		void display(){
			std::cout<<"Name :"<<name<<std::endl;
			std::cout<<"Age : "<<age<<std::endl;
			std::cout<<"Work: "<<works<<std::endl;

		
		}


};

	int main(){
	
		std::string name , works;
		int age;
		std::string choice;

		do{

		std::cout<<"Enter name :\n";
		std::cin>>name;

		std::cout<<"age :\n";
		std::cin>>age;

		std::cout<<"Work :\n";
		std::cin>>works;

		Work w(name , age , works);
		w.display();

		std::cout<<"Continue y/n :\n";
		std::cin>>choice;

		}while(choice== "y" || choice== "Y");
		
	return 0;	
	}
