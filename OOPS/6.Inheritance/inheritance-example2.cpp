#include<iostream>
using namespace std;

class Human {
    private:
    int a;

    protected:
    int b;

    void fun(){      // within the class accessible
        a = 10;
        b = 20;
        c = 30;
    }
   
    public:
    int c;

     


};

int main()
{
    Human Rupesh;
    
    Rupesh.c = 10;  //accessible
   
}