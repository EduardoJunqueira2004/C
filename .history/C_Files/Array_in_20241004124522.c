#include<stdio.h>

int main()
{
    /*
            *array = a data structure that can store  multiple values of the same data type
            *array is a collection of elements of the same data type stored in contiguous memory locations
            *2D arrays  are used to represent matrices an array, where each elements is an entire array
            *useful if you need a matrix,grid, or a table of data;
            
    */


   double prices[] = {5.0,10.0,50.0,25.0,20.0,30.0};//turn the value double in array
   
   //other or
   double prices2[5];
   prices2[0] = 35.0;
   prices2[1] = 110.0;
   prices2[2] = 250.0; 
   prices2[3] = 525.0;
   prices2[4] = 720.0;

   printf("%lu bytes\n",sizeof(prices));
   printf("%lu bytes\n",sizeof(prices2));
/*printf("$%lf",prices[0]);//First element begins with 0 and others goes continuous .....
    printf("\n$%lf",prices[1]);
    printf("\n$%lf",prices[2]);
    printf("\n$%lf",prices[3]);
    printf("\n$%lf",prices[4]);

    printf("\n$%lf",prices2[0]);
    printf("\n$%lf",prices2[1]);
    printf("\n$%lf",prices2[2]);
    printf("\n$%lf",prices2[3]);
    printf("\n$%lf",prices2[4]);
*/
   //Loop for print  array better than what I have behind
   //sizeof(prices)/sizeof(prices[0])--> calculate the max of size in the array and / for the first array by default always
    for(int i = 0; i< sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("\n$%.2lf",prices[i]);
        
    }
    for(int i = 0; i< sizeof(prices2)/sizeof(prices2[0]); i++)
    {
        printf("\n$%.2lf",prices2[i]);
        
    }

   // Matrix 2 dimensional  array with 3 rows and 3 columns
    int matrix[3][3] = {{1,2,3},{4,5,5}};

    //Matri
    

    printf("\n%d",matrix);
    

    return 0;
}