#include<stdio.h>

int main()
{
    /*
            *array = a data structure that can store  multiple values of the same data type
    */

   double prices[] = {5.0,10.0,50.0,25.0,20.0};//turn the value double in array
   
   //other or
   double prices2[5];
   prices2[0] = 5.0;
   prices2[1] = 10.0;
   prices2[2] = 50.0;
   prices2[3] = 25.0;
   prices2[4] = 20.0;

    printf("$%lf",prices[0]);//First element begins with 0 and others goes continuous .....
    printf("\n$%lf",prices[1]);
    printf("\n$%lf",prices[2]);
    printf("\n$%lf",prices[3]);
    printf("\n$%lf",prices[4]);

    printf("\n$%lf",prices2[0]);
    printf("\n$%lf",prices2[1]);
    printf("\n$%lf",prices2[2]);
    printf("\n$%lf",prices2[3]);
    printf("\n$%lf",prices2[4]);

    //Loop for print  array better than what I have behind
    for(int i = 0; i< 5; i++)

    return 0;
}