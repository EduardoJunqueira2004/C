#include<stdio.h>

int main()
{
    int age;
    char name[25];//bytes
    printf("Hi, people my name is Eduardo!.  \n");
    printf("Hello World");
    printf("\nHow old are you? \n");
    scanf("%d",&age);
    printf("You are %d years old!\n",age);
     printf("Now\n");
     printf("Babe\n");
     printf("What's your name?\n");
     //scanf("%s", name);
     fgets(name,25,stdin);//We can read any character spaces!
     printf("How are you %s ?",name);
    return 0;

}