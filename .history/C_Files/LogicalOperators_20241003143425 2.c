#include<stdio.h>
#include<stdbool.h>

int main()
{
    /*
            Logical operators = &&(AND) checks or (OR) if two conditions are true
    */
    //Variables
    float temp = 1000;

    if(temp >= 0 && temp <= 30)
    {
        printf("The weather is good\n");
    } 
    else
    {
        printf("The weather is bad!\n");
    }
    return 0;
}