#include<stdio.h>
#include<string.h>
int main()
{
    int age;
    char name[35];//bytes
     printf("Hello World\n");
    
     printf("How are you %s\n",name);
    printf("How old are you? \n");
    scanf("%d",&age);
     printf("You are %s and you have %d years old!\n",name,age);
    return 0;

}