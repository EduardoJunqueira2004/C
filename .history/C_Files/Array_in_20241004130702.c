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


   // Matrix 2 dimensional  array with 2 rows and 3 columns
    int matrix[3][3];
   
    
   int rows=sizeof(matrix)/sizeof(matrix[0]), columns=sizeof(matrix)/sizeof(matrix[0][0]);
   printf("\n%d rows and %d columns\n",rows,columns);
// Preenchendo a matriz com valores
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;

    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;

    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;
    //I can't printf here :printf("\n%d",matrix);

    //I need a loop  for to print the matrix
    //1º loop For is for rows
    printf("\n");//New line
    for(int i = 0;i< rows; i++)
    {
        //2º loop For is for columns
        for(int j = 0;j < columns;j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");//New line
    }

    

    return 0;
}