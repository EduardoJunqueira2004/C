#include<stdio.h>
#include<stdbool.h>

int main()
{
    /*
            Logical operators = &&(AND) if two conditions are true checks or || (OR) if one conditions are true or ! (NOT) revers
    */
    //Variables
    float temp = 25;
    bool sunny =false;

    if(temp >= 0 && temp <= 30 && sunny)//sunny is boolean is false like  0 not execute
    {
        printf("The weather is good\n");
    } 
    else if(temp <=-10 && temp >40 )
    {
        printf("The weather is really bad");
    }
    else if(temp >=10 || temp <= 35)
    {
        printf("The weather is perfect");
    }
    else
    {
        printf("The weather is bad!\n");
    }
    return 0;
}