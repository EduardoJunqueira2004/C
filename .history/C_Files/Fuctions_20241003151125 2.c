#include<stdio.h>


void birthday(char x[35] ,int y)
{
     //We need to print four times Happy birthday to you!
    printf("Happy birthday dear %s\n", x);
    printf("Happy birthday dear %s!\n",x);
    printf("Happy birthday dear %s!\n",x);
    printf("\nHappy birthday dear %s!\n",x);
    printf("\nYou are %d years old  %s !\n",y,x);
}
int main()
{
    /*
                using a fuction I can put one time the 4 four times Happy birthday to you! in one time!
    */

   //Variables
   char name[35];
   int age;

        printf("Please introduce your name and your age here:\n");
        printf("Name: ");
         fgets(name,35,stdin);//We can read any character spaces! this need to stay first in the code!
        printf("Age: ");
        scanf("%d",&age);
    birthday(name,age);
    birthday(name,age);
    birthday(name,age);


    return 0;
}