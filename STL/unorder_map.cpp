#include<iostream>
#include<string>
#include<unordered_map>

    int main(){

        std::unordered_map<std::string , double> data;
        data["ruturaj"] = 125000.00;
        data["unknown"] =45000.50;
        data["emp1"] = 25000;
        data["ex"] = 45222.45;

        for(auto& info : data){
            std::cout<<info.first <<"  =  "<<info.second<<std::endl;
        }

        // remove element

        data.erase("ex");

        std::cout<<"after removing :"<<std::endl;
        for(auto& info : data){
            std::cout<<info.first <<" = "<<info.second<<"\n";
        }

        return 0;
    }