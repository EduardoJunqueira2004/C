#include<stdio.h>

int main()
{
    int age;
    char name[25];//bytes
    printf("What's your name?\n");
     //scanf("%s", name);
     fgets(name,25,stdin);//We can read any character spaces!
     printf("How are you %s ?",name);
    printf("\nHow old are you? \n");
    scanf("%d",&age);
     printf("Now\n");
     printf("Babe\n");
     
     printf("You are %d years old!\n",age);
    return 0;

}