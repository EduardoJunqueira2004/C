#include<stdio.h>

int main()
{
    //Convert Temperature in (F) to (C) or (C) to (F) Code
    //Variables 
    float temp;
    char unit;
    printf("Is the Temperature in (F) or in (C) ? ");
    scanf("%c",&unit);
    
    unit= toupper(unit); //c or C f or F

    if(unit == 'C')
    {
        printf("The temperature choose is %c Celsius",unit);
        printf("Enter the Temperature in Celsius: ");
        scanf("%f",&temp);
        printf("Convert the temperature Celsius for Fahrenheit:");
        
    }
    else if(unit == 'F')
    {
        printf("The temperature choose is %c Fahrenheit",unit);
        printf("Enter the Temperature in Fahrenheit: ");
        scanf("%f",&temp);
    }
    else 
    {
        printf("please choose a correct term for temperature like (F) or in (C): ");
    }

    return 0;
}