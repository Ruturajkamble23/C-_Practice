#include<iostream>
using namespace std;

class Demo{

	public:
		static int sq(int a){
		return a * a ;
		}

};

	int main(){
		int a;
		cout<<"Enter interger Number :\n";
		cin>>a;
		cout<<"Squre of interger : "<<Demo::sq(a)<<endl;
	return 0;
	}
