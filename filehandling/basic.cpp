#include<iostream>
#include<fstream>
using namespace std;
	
	int main(){
	
		string name;
		double salary;
		string work;

		ofstream outfile("info.txt");

		if(outfile.is_open()){
		cout<<"Enter name :\n";
		cin>>name;

		cout<<"Enter salary :\n";
		cin>>salary;

			

		cout<<"Enter work :\n";
		cin>>work;


		outfile<<"Naav :"<<name<<endl;

		outfile<<"Pagar :"<<salary<<endl;

		outfile<<"Work :"<<work<<endl;

		outfile.close();

		cout<<"data save in txt file "<<endl;

		
		}else{
		
		cout<<"file not found "<<endl;
		
		}


		ifstream  infile("info.txt");

		if(infile.is_open()){
		
		string line;
		cout<<"Reading data :"<<endl;
		while(getline(infile , line)){
		cout<<line<<endl;
		}

		infile.close();
		}else{
		
		cout<<"Error to open :"<<endl;
		}
	return 0;
	}
