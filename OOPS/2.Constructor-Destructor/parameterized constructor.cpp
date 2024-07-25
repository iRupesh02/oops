#include<iostream>
using namespace std;

class Customer
{
    string name;
    int ac;
    int balance;
    int *roi;


    public:
    Customer()                
    {       
        name = "Rupesh";
        ac = 4;
        balance = 100;
        roi = new int[100];
    }

    // Parameterized consructor
    Customer(string a , int b , int c)                
    {       
        name = a;
        ac = b;
        balance = c;
    }

   
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<endl;
    }

};

int main(){
    Customer A1;
    Customer A2("Rupesh" , 121, 100000);
    
    A1.display();
    A2.display();
   
}   

