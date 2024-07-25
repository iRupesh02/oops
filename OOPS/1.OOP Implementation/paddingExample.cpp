// Padding in C++ is not directly related to OOP concepts like inheritance or polymorphism. It's more about memory management and optimization.
// Here's how padding works in C++:
// What is Padding?
// Padding refers to the extra bytes inserted by the compiler into structures or classes to ensure proper alignment of data members in memory.
// Why Padding is Needed?
// Data Alignment:
// CPUs access data more efficiently when it's aligned to specific memory addresses. For example, a 4-byte integer might be accessed faster if it's stored at a memory address that's a multiple of 4.
// Performance Optimization:
// Padding helps optimize memory access, which can lead to faster program execution.
// struct Example {
//     char c;    // 1 byte
//     int i;     // 4 bytes
//     char d;    // 1 byte
// };

#include<iostream>
using namespace std;

class a
{
    int b; // 4 bytes
    char c; // 1 bytes
    char d; // 1 bytes
    double e; // 8 bytes
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<" ";  
    // 16 bytes 
}