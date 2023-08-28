#include<stdio.h>
int main()
{
    int age;
    printf("ENTER AGE \n");
    scanf("%d",&age);
    if(age>18)
    {
        printf("Eligible to vote");
    }
    else
        printf("not egb");
}