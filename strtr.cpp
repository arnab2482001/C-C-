/*

#include<iostream>
using namespace std;
struct stu
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct stu s;
    cout<<"Enter student roll number: ";
    cin>>s.roll;                                        //main fn doesn't know which is roll,name,marks it can access through structure
    cout<<"Enter student name: ";
    cin>>s.name;                                        //structure --> we can print dissimilar values at one time at the execution of prg
    cout<<"Enter student total marks: ";                                //It will print the whole prg
    cin>>s.marks;
    
    cout<<s.roll<<" "<<s.name<<" "<<s.marks;
    return 0;
}

*/


                                                                    //UNION//


#include<iostream>
using namespace std;
union stu
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    union strtr
    {
        /* data */
    };
    union stu s;
    cout<<"Enter student roll number: ";                //UNION --> union is sllightly different then structure here only the largest value
                                                                                                //it will print and 
                                                                                                //one value at one time during execution
                                                                                                
                                                        //if we print the whole prg at one time it will print some garbage value

    cin>>s.roll;   
    cout<<"Student roll : "<<s.roll<<endl;                                  
    cout<<"Enter student name: ";
    cin>>s.name;
    cout<<"NAME : "<<s.name<<endl;

    cout<<"Enter student total marks: ";
    cin>>s.marks;
    cout<<"Marks : "<<s.marks<<endl;
    
    cout<<s.roll<<" "<<s.name<<" "<<s.marks;
    return 0;
}