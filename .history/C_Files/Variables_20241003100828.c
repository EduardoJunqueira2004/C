#include<stdio.h>

int main()
{
    /*
    Variable=   Allocated space in memory to store a value.
                Need to declare before use in  main
                Declaration+Initialization! 
    Types of variables:
                            char    
                            signed char 
                            unsigned char   
                            short...  
                            int     
                            unsigned int
                            long.... 
                            unsigned long int 
                            long long ....
                            float
                            double
                            long double           
    */
   int x; //Declaration
   x=123; //Initialization!
   int y= 321;//Declaration +Initialization
    int age = 21; //integer;
    float gpa = 2.05; //floating point number
    char grade ='C'; //single character=Objects
    char name[]="Bro";//Array of characters

    printf("You are %d years old",age );

    return 0;
}