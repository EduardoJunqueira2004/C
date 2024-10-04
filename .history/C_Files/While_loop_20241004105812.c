#include<stdio.h>
#include<string.h>

int main()
{
    /*
            While loop --> repeats a section of code possibly unlimited times.
            While some conditions remains true
            a while loop might not execute at all

            Do While loop --> checks a condiction, THEN exe
    */

   char name[25];

   printf("What's your name: ");
   fgets(name,25,stdin);
   name[strlen(name) -1]='\0';

    //Force something with loop While
    while(strlen(name) == 0)//While this condiction  is true run the code
    {
        printf("You didn't not enter your name");
        printf("What's your name: ");
        fgets(name,25,stdin);
        name[strlen(name) -1]='\0';
    }
   printf("Hello %s",name);


    return 0;
}
