#include<stdio.h>
#include<string.h>
int main()
{
    int age;
    char name[35];//bytes
     printf("Hello World\n");
    printf("What's your name?\n");
     //scanf("%s", name);
     fgets(name,35,stdin);//We can read any character spaces! this need to stay first in the code!
     name[strlen(name)-1] ='\0'; //can read new caracter line  space but can make more sense w
    printf("How old are you? \n");
    scanf("%d",&age);
     printf("You are %s and you have %d years old!\n",name,age);
    return 0;

}