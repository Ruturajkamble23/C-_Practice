#include<iostream>
class A {
	public:

	void info(){
	
		std::cout<<"Function call from Calss A \n";
	}
};

class B :virtual  public A{};
class C :virtual  public A{};

class D :public B , public C {};

int main(){

D d;
//d.B::info();
//
d.A::info();
d.B::info();
}
