#include<stdio.h>
#include<stdbool.h>//include the booleans 
int main()
{
    //Variables
    int age;
    bool a=1;
    printf("Enter your age:\n ");
    scanf("%d",&a);
    
        printf("Enter your age:\n ");
    scanf("%d",&age);
        printf("Your age is: %d years old!\n",age);

        if(age >= 18)
        {
            printf("You are now signed up!\n");
        }
        else if(age == 0)
        {
            printf("You can't sign up! You were just born!");
        }
        else if(age <0)
        {
            printf("You haven't been born yet!\n");
        }
        else
        {
            printf("You are too young to signed up!\n");
        }
    return 0;
}