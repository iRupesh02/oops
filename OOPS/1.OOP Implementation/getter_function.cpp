#include<iostream>
using namespace std;

class Student
{   
    private:
    string name;
    int age , roll_number;
    string grade;


    public:
    void setname(string s){
        name = s;
    }
    void setage(int a){
        age = a;
    }
    void setroll_number(int r){
        roll_number = r;
    }
    void setgrade(string g){
        grade = g;
    }
    

    //  getter function

    void getname(){
        cout<<name<<endl;
    };

    void getage(){
        cout<<age<<endl;
    }
    int getroll_number(){
        return roll_number;
    }
    string get_grade(int pin){
        if(pin == 123) 
        return grade;

        return "";
    }
};

int main(){
    Student S1;
    S1.setname ("Rupesh");
    S1.setage(22);
    S1.setroll_number(38);
    S1.setgrade("A+");

    // calling getter function
    S1.getname();
    S1.getage();
    cout<<S1.getroll_number();

    cout<<S1.get_grade(123);
}