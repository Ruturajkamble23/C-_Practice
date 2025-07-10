#include<iostream>
using namespace std;

class Test{
	
	private:
		// i make parameterless ctor private 
		 Test(){}
	public:
		static void greets(){
		cout<<"Good Mornging.....\n";
		}


};

	int main(){
		
			Test::greets();

			return 0;
	
	
	}
