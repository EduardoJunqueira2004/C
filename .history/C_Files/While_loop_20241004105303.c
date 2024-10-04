#include<stdio.h>
#include<string.h>

int main()
{
    /*
            While loop --> repeats a section of code possibly unlimited times.
            While some conditions remains true
            a while loop might not execute at all
    */

   char name[25];

   printf("What's your name: ");
   fgets(name,25,stdin);
   name[strlen(name) -1]='\0';

    //For
   printf("Hello %s",name);


    return 0;
}
