#include<stdio.h>

int main()
{
    /*
            *continue = skips rest of code & forces the next interation of loop
            *break = stops the loop/switch
    */

   for(int i =1; i<= 20; i++)
   {
    //if I want to skip the number 13 i can use a continue statement 
    if(i == 13)
    {
        continue;//continue and force for the next generation of the loop
    }
    //If I want to break at the number 15 i can use a break  statement to exit the loop
    if(i == 15)
    {
        break;
    }
        printf("%d",i);
   }
   
   //Example now in a switch case Note: in Switch case i only can use break in the case I can't use
   //continue in switch case.
   //*Continue is just for loops
   int choice;
   printf("Enter your choice: ");
   scanf("%d",&choice);
   switch(choice)
   {
            case 1:
                printf("Hello");
            break;
            case 2:
                printf("Hi");
            break;
            case 3:
                printf("exit");
            break;
            default:
            printf("Please ");
            
   }
    return 0;
}