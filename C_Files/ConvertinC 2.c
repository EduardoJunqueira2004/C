#include<stdio.h>
#include <ctype.h> //to accept string in lower case or high case c C f F
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
        temp =(temp *9 /5) +32;
        printf("temperature in Fahrenheit is: %.1f Fahrenheit",temp);
    }
    else if(unit == 'F')
    {
        printf("The temperature choose is %c Fahrenheit",unit);
        printf("Enter the Temperature in Fahrenheit: ");
        scanf("%f",&temp);
        printf("Convert the temperature Fahrenheit for Celsius:");
        temp=((temp-32)*5);
        printf("temperature in Celsius is: %1.f Celsius",temp);

    }
    else 
    {
        printf("please choose a correct term for temperature like (F) or in (C): ");
    }

    return 0;
}