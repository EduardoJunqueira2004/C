#include<stdio.h>

int main()
{
    //Variables1
    
    int age;

        printf("Enter your age: ");
    scanf("\n%d",&age);
        printf("Your age is: %d years old!\n",age);

        if(age >= 18)
        {
            printf("You are now signed up!");
        }
        else
        {
            printf("You are too young to signed up!");
        }
    return 0;
}