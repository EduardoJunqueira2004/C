#include<stdio.h>

int main()
{
    /*
            *array = a data structure that can store  multiple values of the same data type
    */

   double prices[] = {5.0,10.0,50.0,25.0,20.0};//turn the value double in array
   
   //other or
   double prices2[5];
   prices2[0] = 35.0;
   prices2[1] = 110.0;
   prices2[2] = 250.0;
   prices2[3] = 525.0;
   prices2[4] = 720.0;
/**/
    
    //Loop for print  array better than what I have behind
    for(int i = 0; i< 5; i++)
    {
        printf("\n$%lf",prices[i]);
        printf("\n$%lf",prices2[i]);
    }

    return 0;
}