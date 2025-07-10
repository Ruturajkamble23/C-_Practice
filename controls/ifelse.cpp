#include<iostream>
#include<string>
int main()
{
	std::string role;
	std::cout<<"Enter ur role :\n";
	std::cin>>role;

	if(role=="admin"){
		std::cout<<"You are Admin \n";
	}else if (role=="manager"){
		std::cout<<"u are manager \n";
	}else
	{std::cout<<"berojgaar hai tu \n";}
	
	return 0;}