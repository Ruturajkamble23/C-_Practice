#include<iostream>
int main(){

long num;

std::cout<<"Enter possitive number : \n";
std::cin>>num;

long sum=0;

while(num){

	sum += num % 10;
	num /= 10;
}

std::cout<<"Sum of digits : "<<sum<<std::endl;
return 0;
}
