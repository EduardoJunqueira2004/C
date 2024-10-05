#include<stdio.h>

//outside the main function
enum Day{Sun=1,Mon=2,Tue=3,Wed=4,Thu=5,Fri=6,Sat=7};
int main()
{
    
    /*
        * enum = a user defined type of named integer identifiers helps to make a program more readable
    */
   enum Day today = Mon;
   printf("Today is %d",today);//defined by integer value always  named integer identifiers helps to make a program more readable

   //Make a program more readable for developer 
   //Associated integer value
   if( today == Sun || today == Sat )
   {
         printf("\nIt's the weekend! Party Time!\n");

   }else
   {    
        printf("\nIt's a week work day! Get to work!\n");
   }

    return 0;
}