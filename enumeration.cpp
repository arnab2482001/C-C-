#include<iostream>
using namespace std;

// Enumeration --> Enumeration (Enumerated type) is a user-defined data type that can be assigned some limited values. These values are defined by the programmer at the time of declaring the enumerated type.

//Also in enumeration we cannot assign values only we can aceess or print the value defined i the enumeration

int main()
{
    enum gender{
        male,female,others  //male --> 0
        // female --> 1
        // others --> 2
    };
    cout<<male<<endl;
    gender str1=others;
    cout<<str1;
    return 0;
}