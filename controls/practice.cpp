#include<iostream>
#include<string>
int main(){

    std::string role;
    int password;
    char choice;
do{
    std::cout<<"enter role :\n";
    std::cin>>role;
    std::cout<<"Enter password :\n";
    std::cin>>password;

    if(role=="admin"){
        if(password==123){
            std::cout<<"Grant access for admin \n";
        }else{
            std::cout<<"Wrong password for admin  .\n";
        }
    }else if (role=="emp"){
        if(password==12345){
            std::cout<<"Grant acess for emp \n";
        }else{
            std::cout<<"wrong password \n";
        }
    }else{
        std::cout<<"inputs is wrong \n";
    }

    std::cout<<"u want to continue y/n :\n";
    std::cin>>choice;

}while (choice == 'y' || choice == 'Y');

return 0;



}
