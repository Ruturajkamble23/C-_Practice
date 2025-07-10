#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

	int main(){
	
		std::vector<std::string > names = {"ruturaj" , "rutu"};
		names.push_back("x");
		
		std::cout<<"using string ---->"<<std::endl;
		for(std::string name : names){
		
			
			std::cout<<name<<std::endl;
		}


		std::cout<<"using int ---->"<<std::endl;
		std::vector<int> number = {};
		number.push_back(10);
		number.push_back(60);
		number.push_back(20);
		number.push_back(9);

		for(int num : number){
		
			std::cout<<"Numbers :"<<num<<std::endl;
		}
			
		//using alogorithms -------> sorting
		// Internally uses IntroSort (Quick + Heap + Insertion)
		sort(number.begin() , number.end());
		
		std::cout<<"After sorting ---->"<<std::endl;
		for(int num : number){
		std::cout<<num<<" "<<std::endl;
		}

		//for reverse ----->
	//	std::cout<<"After reversing ---->"<<std::endl;
	//	reverse(number.begin() , number.end());
	//	for(int num:number){
	//	
	//		std::cout<<num<<" "<<std::endl;
	//	}


		//using binary_search() ---->
		

		bool find_element = std::binary_search(number.begin() , number.end(), 20); //finding 20 in vector 
		//for turnary --->
		//std::cout<<" \n"<< ( find_element ? " 20 is present in vector" : " 20 not present in vector")<<std::endl;
		

		// NOTE ----> if vector is not in sorted order then we cant perform binary search operation 
		
		if(find_element){
		
			std::cout<<"20 present\n";
		}else{
		
			std::cout<<"20 not present:\n";}

		//upper and lower bound ----- 
		// auto bounds = lower_bound(v.begin(), v.end(), 5);


	return 0;	
	
	}
