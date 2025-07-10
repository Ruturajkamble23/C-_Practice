#include<iostream>
#include<string>
class Pra{

    private:

    std::string name;
    double salary ;
    std::string work;

    public:

    // std::string getName(){
    //     return name;
    // }

    // void setName(std::string name){
    //     this-> name;
    // }


    Pra(){

        this-> name = name;
        this->salary = salary;
        this->work= work;


    }

    // Pra(){}

    void display(){

        std::cout<<"Name : \n"<<name<<std::endl;
        std::cout<<"Salary : \n"<<salary<<std::endl;
        std::cout<<"Work : \n"<<work<<std::endl;
    }


};

    int main(void){

        std::string name;
        double salary;
        std::string work;

        std::cout<<"Enter name :\n";
        std::cin>>name;

        std::cout<<"Enter salary :\n";
        std::cin>>salary;

        std::cout<<"Enter work :\n";
        std::cin>>work;

        Pra p(name , salary , work);
        p.display();


    }
