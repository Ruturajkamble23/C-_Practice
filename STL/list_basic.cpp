#include<iostream>
#include<list>
#include<string>
#include<algorithm>

	int main(){
	
	std::list<std::string> names ={};
	names.push_back("ruturaj");
	names.push_back("rutu");
	names.push_back("se");
	std::cout<<"Names :"<<std::endl;


	for(std::string name : names){
		std::cout<<name<<" ,";
	}
	

	//for(auto& name : names){
	//
	//std::cout<<name<<" ,";
	//} 	
	
	std::cout<<std::endl;
	

	//for removing 
	
	names.remove("se");
	std::cout<<"after removing \n";
	
	//here i use pointer for access the data store in nodes
	
	for(std::list<std::string>::iterator it = names.begin(); it != names.end(); ++it){
		std::cout<< *it <<" "; 
	
	}

	std::cout<<std::endl;

	return 0;
	}
