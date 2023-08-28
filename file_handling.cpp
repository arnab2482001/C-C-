#include<iostream>
#include<fstream>
using namespace std;
int main()

// FILE HANDLING --> File handling is used to store the prg permenantly 
//operations --> create , write , read
// create || write -->ofstream
// read -->ifstream  

{
 /*   ofstream newFile("C:\\Users\\Arnab\\Desktop\\cpp.txt");

    cout<<"File created"; //to print in prg console we used cout

    newFile<<"CPP FILE CREATED "; //TO PRINT IN FILE 

    */

   string str;      //copy string vakue of file to str
   ifstream newFile("C:\\Users\\Arnab\\Desktop\\cpp.txt");

    while(getline(newFile,str))             //getline is used to read line by line 
    {
        cout<<str<<endl;
    }

    newFile.close();
    return 0;
}