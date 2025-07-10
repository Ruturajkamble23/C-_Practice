#include<iostream>
#include<string>

int main(){
	std::string role;
	std::string password;

	std::cout<<"enter role :\n";
	std::cin>>role;

	std::cout<<"enter password : \n";
	std::cin>>password;

	if(role=="admin"){
	if(password=="1234"){
		std::cout<<"login successs\n";
	}
	} else if (role == "emp"){
		if(password=="12"){
			std::cout<<"Emp login success \n";
		}
	}else {
		std::cout<<"Login denied : \n";
	}

return 0; 
}

