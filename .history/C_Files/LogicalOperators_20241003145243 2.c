#include<stdio.h>
#include<stdbool.h>

int main()
{
    /*
            Logical operators = && (AND) if two conditions are true 
            || (OR) if one condition is true 
            ! (NOT) reverses the state of a condition 
    */
    // Variables
    float temp = 5;  // Testando com uma temperatura de exemplo
    bool sunny = false;

    if(temp >= 15 && temp <= 30 && sunny)
    {
        printf("The weather is good\n");
        printf("It's sunny outside\n");
    } 
    else if(temp >= 40 && temp <= 50)
    {
        printf("The weather is really hot\n");
    }
    else if(temp < 0)
    {
        printf("The weather is freezing cold\n");
    }
    else if(temp >= 10 && temp < 15 && !sunny)
    {
        printf("It's a bit chilly, but manageable\n");
        printf("It's cloudy outside\n");
    }
    else if((temp >= 10 && temp <= 35) && sunny)
    {
        printf("The weather is perfect\n");
        printf("It's sunny outside\n");
    }
    else
    {
        printf("The weather is bad outside\n");
        printf("It's cloudy outside!\n");
    }
    
    return 0;
}