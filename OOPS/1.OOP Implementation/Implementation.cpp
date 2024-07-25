// OOPs stands for Object-Oriented Programming System. It's a programming paradigm that structures programs around objects rather than functions and logic.
// In C++, OOPs is implemented using the following core concepts:
// Classes and Objects:
// Class: A blueprint or template for creating objects. It defines the data (attributes) and functions (methods) that the objects of that class will have.
// Object: An instance of a class. It represents a real-world entity and encapsulates data and behavior.



#include<iostream>
using namespace std;

class Student
{   
    public:
    string name;
    int age , roll_number;
    string grade;
};

int main(){
    Student S1;
    S1.name = "Rupesh";
    S1.age = 22;
    S1.roll_number = 38;
    S1.grade = "A++";

    cout<<S1.age<<" ";


    Student S2;
    S2.name = "Ram";
    S2.age = 22;
    S2.roll_number = 38;
    S2.grade = "A+";

    cout<<S2.age<<" ";
}