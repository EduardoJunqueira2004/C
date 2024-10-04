#include<stdio.h>

int main()
{
     /*
            Nested loops = a loop inside of another loop
     */
     
     //Number of rows and columns  exercise 

     //variables 
     int rows,columns;
     char symbol;

     printf("\nEnter numbers of rows: ");
     scanf("%d",rows);
     printf("\nEnter numbers of columns: ");
     scanf("%d",columns);

     //Nested loops --> we can use for loops or while loops

    //out loop is cor rows
     for(int i =1; i<=rows;i++)
     {
        printf("");
        for(int j=1; j<=columns;j++)//inner loop is for columns
        {
printf("");
        }
        

     }


     
     return 0;
}