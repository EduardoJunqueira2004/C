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
        continue;//continue 
    }
        printf("%d",i);
   }
   
    return 0;
}