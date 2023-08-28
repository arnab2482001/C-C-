#include<iostream>
using namespace std;

//pointer is a variable that can able to hold a address of another variable 
// & --> Address of operator
// * --> value at address operator
//POINTER --> A pointer however, is a variable that stores the memory address as its value.

int main()
{
    int a=10;
    int *p;        // pointer
    p=&a;          //copyig address
    cout<<&a<<endl;     //address of a
    cout<<a<<endl;      //value of a
    cout<<p<<endl;      //pointer address of a
    cout<<*p;           //pointer value of a
    
}