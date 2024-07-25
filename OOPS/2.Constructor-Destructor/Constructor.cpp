// In C++, a constructor is a special member function of a class that is automatically called when an object of that class is created. It initializes the object's data members and prepares the object for use.
// Key characteristics of constructors:
// Same name as the class: The constructor has the same name as the class it belongs to.
// No return type: Constructors do not have any return type, not even void.
// Automatic invocation: Constructors are called automatically when an object is created.
// Overloading: You can define multiple constructors with different parameter lists to allow for different ways of initializing an object.
// Default constructor: If you don't define any constructor, the compiler provides a default constructor with no arguments.


#include<iostream>
using namespace std;

class Customer
{
    string name;
    int ac;
    int balance;


    public:
    // Default Constructor
    // Customer()                
    // {       
    //     cout<<"Constructor called"<<endl;
    // }
    Customer()                
    {       
        name = "Rupesh";
        ac = 4;
        balance = 100;
    }
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<endl;
    }

};

int main(){
    Customer A1, A2, A3;
    A1.display();
    A2.display();
    A3.display();
}   

