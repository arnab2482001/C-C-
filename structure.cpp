#include<iostream>
using namespace std;

//structure is a user defined datatype which are used to store dis-similar types of values 
//size of structure is equal to sum of all structure member size
struct stu
{
    int marks;      //int 4 bytes
    float avg;      //float 4 bytes
    double salary;  //double 8 bytes (4+4+8=16 bytes)

};
//union same as structure just diff is  
//size of union is equal to its biggest member size
union stu2
{
    int marks;
    float avg;
    double salary; //double 8 bytes (8 bytes)
};
int main()
{
    struct stu s;
    union stu2 s2;
    cout<<"Structure size="<<sizeof(s)<<endl;
    cout<<"U size="<<sizeof(s2);
    return 0;
}