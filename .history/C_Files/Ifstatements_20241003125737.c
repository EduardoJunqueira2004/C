#include<stdio.h>

int main()
{
    //Variables
    int age;

        printf("Enter your age: ");
    scanf("\n%d",&age);
        printf("Your age is: %d years old!\n",age);

        if(age >= 18)
        {
            printf("You are now signed up!");
        }
        else if(age <0)
        {
            printf("You haven't been born yet!");
        }
        else
        {
            printf("You are too young to signed up!");
        }
    return 0;
}