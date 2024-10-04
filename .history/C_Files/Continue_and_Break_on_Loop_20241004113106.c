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
    if(i == 15){}
        printf("%d",i);
   }
   
    return 0;
}