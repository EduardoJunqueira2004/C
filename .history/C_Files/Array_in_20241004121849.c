#include<stdio.h>

int main()
{
    /*
            *array = a data structure that can store  multiple values of the same data type
    */

   double prices[] = {5.0,10.0,50.0,25.0,20.0};//turn the value double in array
   
   //other or
   

    printf("$%lf",prices[0]);//First element begins with 0 and others goes continuous .....
    printf("\n$%lf",prices[1]);
    printf("\n$%lf",prices[2]);
    printf("\n$%lf",prices[3]);
    printf("\n$%lf",prices[4]);
    return 0;
}