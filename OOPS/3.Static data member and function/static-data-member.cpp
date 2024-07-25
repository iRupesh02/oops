// In C++, a static data member is a variable that is shared by all objects of a class. Unlike non-static data members, which are unique to each object, there's only one copy of a static data member for the entire class.
// Key points about static data members:
// Declaration:
// Declared inside a class using the static keyword.
// Scope:
// Accessible by all objects of the class, but not part of any individual object.
// Lifetime:
// Exists for the entire duration of the program, even if no objects of the class are created.
// Initialization:
// Must be initialized outside the class definition, typically in a source file.
// Access:
// Accessed using the scope resolution operator :: with the class name or through a static member function.

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

    void display_total(){
        cout<<total_customer<<endl;
    }

   

};


int Customer:: total_customer = 0;


int main(){

    Customer A1("Rupesh" , 1 , 1000);
    Customer A2("Nitesh" , 2 , 2000);
    Customer A3("Rupesh" , 3,3000);
   
    A2.display_total();
    

}