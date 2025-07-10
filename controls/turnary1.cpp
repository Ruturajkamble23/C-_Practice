#include<iostream>

int main(){

	double amount;
	std::cout<<"Enter amount \n";
	std::cin>>amount;

	double Cgst =(amount >= 1000) ? amount * 0.18 / 100:0.00;

	double Sgst=(amount >= 1000) ? amount * 0.28 /100:0.00;

	double tax = Cgst + Sgst;

	std::cout<<"CGST :"<<Cgst<<std::endl;
	std::cout<<"SGST :"<<Sgst<<std::endl;
	std::cout<<"Total Tax :"<<tax<<std::endl;
	return 0;



}
