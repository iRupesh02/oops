#include<iostream>
using namespace std;

class Customer{
    string name;
    int ac, balance;
    static int total_customer;
    public:

    Customer(string name , int ac , int balance){
        this->name = name;
        this->ac = ac;
        this->balance = balance;
        total_customer++;
    }

    void display(){

        cout<<name<<" "<<ac<<" "<<balance<<" "<<total_customer<<" "<<endl;


    }

   

};


int Customer:: total_customer = 0;


int main(){

    Customer A1("Rupesh" , 1 , 1000);
    Customer A2("Nitesh" , 2 , 2000);
    
    A1.display();
    A2.display();
    Customer A3("Rupesh" , 3,3000);
    A3.display();

}