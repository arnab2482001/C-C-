#include<iostream>
using namespace std;

// Function --> A function is a set of statements that take inputs, do some specific computation, and produce output. The idea is to put some commonly or repeatedly done tasks together and make a function so that instead of writing the same code again and again for different inputs, we can call the function.

/*
int c=10;           //global variable -->all over the prg
void fun()                      //fuction
{
    int a=10;       //auto // auto run just within the block
    static int b=10;        //it run till the termination of program
    cout<<a<<" "<<b<<endl;
    ++a;++b;
    cout<<c<<" "<<d;
}
int main()
{                                                                          //auto //static
    int d;      //local variable --> within the loop
    fun();                  //calling                                       // 10  10
    fun();                  //calling                                       // 10  11
    fun();                  //calling                                       // 10  12
    fun();                  //calling                                       // 10  13
    return 0;
}
*/
// function is used to call 
void fun(int a,int b)   //definition
{
  //  a=100;b=200;
    cout<<a<<endl<<b;
}

int main()
{
    fun(200,400);          //calling
    return 0;
}