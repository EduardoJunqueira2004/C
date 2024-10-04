#include<stdio.h>
#include<string.h>

int main()
{
    /*
            While loop --> repeats a section of code possibly unlimited times.
            While some conditions remains true
            a while loop might not execute at all
            summary:checks a condition, THEN executes a block of code if condition is true

            Do While loop --> always  executes the block of code at least once, Then check a condition!
    */

   char name[25];

   printf("What's your name: ");
   fgets(name,25,stdin);
   name[strlen(name) -1]='\0';

    //Force something with loop While
    while(strlen(name) == 0)//While this condition  is true run the code
    {
        printf("You didn't not enter your name");
        printf("What's your name: ");
        fgets(name,25,stdin);
        name[strlen(name) -1]='\0';
    }
   printf("Hello %s",name);




    return 0;
}