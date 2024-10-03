#include<stdio.h>

int main()
{
    //Convert Temperature in (F) to (C) or (C) to (F) Code
    //Variables 
    float temp;
    char unit;
    printf("Is the Temperature in (F) or in (C) ? ");
    scanf("%c",&unit);
    
    if(unit == 'C')
    {
        printf("The temperature choose is %c ºC",unit);
    }
    else if(unit == 'F')
    {
        printf("The temperature choose is %c Fhara",unit);
    }
    else 
    {
        printf("please choose a correct term for temperature like (F) or in (C): ");
    }

    return 0;
}