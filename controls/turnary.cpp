#include<iostream>
#include<string>
int main(){
	int cc;
	std::cout<<"Enter your bike cc :\n";
	std::cin>>cc;

	std::string bikes = (cc > 140 && cc < 150) ? "This is Yamaha R15M ":
			    (cc == 200) ? "This is Duke 200 ":
			    (cc >= 1000) ? " Bapp Of yamaha segment R1M":
			    (cc =< 99) ? "Honda lover":
			    		"Enter  valid inputs";
	std::cout<<"Names -> "<<bikes<<std::endl;	

return 0;}
