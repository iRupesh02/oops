// capability of class to desire prperty characteristics from another class

#include<iostream>
using namespace std;

class Human {
    private:
    int a;

    protected:
    int b;

    public:
    int c;
};

int main()
{
    Human Rupesh;
    // Rupesh.a = 10;  //not accessible
    // Rupesh.b = 10;  //not accessible
    Rupesh.c = 10;  //accessible
}