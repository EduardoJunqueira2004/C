#include<stdio.h>
#include<stdbool.h>

int main()
{
    /*
            Logical operators = &&(AND) if two conditions are true checks or || (OR) if one conditions are true or ! (NOT) reverses the state of a condition 
    */
    //Variables
    float temp = -10;
    bool sunny =false;

    if(temp >= 0 && temp <= 30 && sunny)//sunny is boolean is false like  0 not execute
    {
        printf("The weather is good\n");
        printf("It's sunny outside\n ");
    } 
    else if(temp >=40  && temp <= 50)
    {
        printf("The weather is really hot");
    }
    else if(temp >=10 || temp <= 35)
    {
        printf("The weather is perfect");
        printf("It's sunny outside\n ");
    }
    else
    {
        printf("The weather is amazing bad outside ! \n");
        printf("It's cloud outside!");
    }
    return 0;
}