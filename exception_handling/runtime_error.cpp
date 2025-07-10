#include<iostream>
#include<string>
#include<stdexcept>
class Basic{
	public:
		int devied(int a , int b){
		if(b==0)
		
		throw std::runtime_error("cant devide by zero ");
		return a / b;
		
		}

};


	int main(){
	
	Basic basic;
	 int a , b;
	 std::cout<<"Enter number A : \n";
	 std::cin>>a;

	 std::cout<<"Enter number B :\n";
	 std::cin>>b;

	 try{
		 std::cout<<"result --> "<<basic.devied(a , b )<<std::endl;
	 }

	 catch(std::exception& e ){
		 std::cout<<"error : "<<e.what()<<std::endl;
	 }
	return 0;
	}
