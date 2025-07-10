#include<iostream>
#include<string>
class En2{

    private:
    std::string name;
    double salary;
    std::string work;

    public:

    En2(std::string name , double salary , std::string work){
        this-> name = name;
        this-> salary = salary;
        this-> work = work;

    }


    void display(){
        std::cout<<""
    
    }

};

int main(){
    std::string name;
    double salary;
    std::string work;
    std::cout<<"Enter name :\n";
    std::cin>>name;

    std::cout<<"Enter salary :\n";
    std::cin>>salary;

    std::cout<<"Enter Work :\n";
    std::cin>>work;

    En2 en(name , salary , work);

   
}
