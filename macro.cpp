/*
#include<iostream>
#define num 10
using namespace std;

 MACRO --> macro is a piece of code in a program which is given some name
Whenever the name is used it is replaced by the contents of the macro
Macro is defined by #define
#define macro_name content
int main()
{
    int i,r; 
    for(i=1;i<=10;i++)
    {
        r=num*i;
        cout<<num<<"*"<<i<<"="<<r<<endl;
    }
    return 0;
}
*/

#include<iostream>
#define num(a,b) ((a>b)?a:b)
using namespace std;

int main()
{

       cout<<num(236,167)<<endl;
       cout<<num(564,250)<<endl;
       cout<<num(120,180)<<endl;
       
    return 0;
}