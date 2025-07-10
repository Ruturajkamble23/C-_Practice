#include<iostream>
#include<string>
#include<map>

int main(){
    int id;
    std::map<int , std::string> info ;
    info[101] = "ruturaj";
    info[102]= "rutu";
    info[103] = "demo";

    std::cout<<"Map in ordered .. "<<std::endl;

    for(auto& data : info){
        std::cout<<data.first<<" = "<<data.second<<"\n";
    }

    //for searching 

    std::cout<<"enter id"<<"\n";
    std::cin>>id;

    if(info.find(id) != info.end()){
        std::cout<<"Id Found : "<<id<<" = "<<info[id]<<std::endl;

    }else{
        std::cout<<"Id  "<<id<<"not found \n";
    }

    return 0;
}
