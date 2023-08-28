#include<stdio.h>
int main()
{
    int a,b;
    int ch;
    printf("Enter a,b,c \n");
    scanf("%d %d ",&a,&b);

    printf("Enter choice \n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("%d",a+b);
        break;
        case 2:printf("%d",a-b);
        break;
        case 3:printf("%d",a*b);
        break;

    }

}