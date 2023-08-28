#include<stdio.h>
void main()
{
    int a=10;
    char b;
    float c;
    double d;
    int e=20;

    //sizeof --> to get the size of data type

    printf("size of int = %d\n",sizeof(a));
    printf("size of char = %d\n",sizeof(b));
    printf("size of float= %d\n",sizeof(c));
    printf("size of double = %d\n",sizeof(d));

    /* post increment / post decrement  */

     printf("size of int = %d\n",a++);
     printf("%d",a);
     printf("size of int = %d\n",a--);
     printf("%d",a);

    
    /* pre increment / pre decrement */

    printf("size of int = %d\n",++a);
    printf("%d",a);
    printf("size of int = %d\n",--a);
    printf("%d\n",a);

    /* Ternary operator */

    printf("%d",(a>e)?a:e);
}



    