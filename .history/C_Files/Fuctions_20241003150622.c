#include<stdio.h>


void birthday()
{
     //We need to print four times Happy birthday to you!
    printf("Happy birthday dear X!\n");
    printf("Happy birthday dear X!\n");
    printf("Happy birthday dear X!\n");
    printf("\nHappy birthday dear X!\n");
    printf("\nYou are Y years old X !\n");
}
int main(char name,int age)
{
    /*
                using a fuction I can put one time the 4 four times Happy birthday to you! in one time!
    */

   //Variables
   char name[35];
   int age;

        printf("Please introduce your name and your age here:");
        printf("Name: ");
         fgets(name,35,stdin);//We can read any character spaces! this need to stay first in the code!
        printf("Age: ");
        scanf("%d",&age);
    birthday(name,age);
    birthday(name,age);
    birthday(name,age);


    return 0;
}