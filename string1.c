#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    puts("Enter string ");
    gets(str1);                      //input
    puts("Enter 2nd string");
    gets(str2);

                                    //strupr() --> lowercase to uppercase
   // puts(strupr(str1));             //output

   // puts(strlwr(str1));            //strlwr() --> uppercase to lowercase

    // puts(strrev(str1));             //strrev() --> reverse order

   // puts(str1);

   // printf("%d",strlen(str1));      //strlen() --> length of str

   //strcpy(str2,str1);       //strcpy() --> copy from one string to another string

  // puts(str1);

 /*   if(strcmp(str1,str2)==0)        //strcmp() --> string comparision
    {
        puts("Both string are equal");
    }
    else
        puts("both string are not equal");
    */


   strcat(str1,str2); //strcat() --> concat between two strings
   puts(str1);

}