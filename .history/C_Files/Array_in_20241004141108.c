#include<stdio.h>
#include<string.h>

int main()
{
    /*
        * array = a data structure that can store multiple values of the same data type
        * array is a collection of elements of the same data type stored in contiguous memory locations
        * 2D arrays are used to represent matrices, where each element is an entire array
        * useful if you need a matrix, grid, or a table of data
    */

    double prices[] = {5.0, 10.0, 50.0, 25.0, 20.0, 30.0}; // turn the value double into an array
    
    double prices2[5] = {35.0, 110.0, 250.0, 525.0, 720.0}; // another array of double values

    // Displaying the size of the arrays
    printf("%lu bytes\n", sizeof(prices));
    printf("%lu bytes\n", sizeof(prices2));

    // Loop to print the array prices
    for(int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
        printf("\n$%.2lf", prices[i]);
    }

    // Loop to print the array prices2
    for(int i = 0; i < sizeof(prices2) / sizeof(prices2[0]); i++) {
        printf("\n$%.2lf", prices2[i]);
    }

    // 2D array with 3 rows and 3 columns
    int matrix[3][3];
    
    // Calculating the number of rows and columns correctly
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    printf("\n\n%d rows and %d columns\n", rows, columns);

    // Filling the matrix with values
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;

    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;

    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;

    // Loop to print the matrix
    printf("\nMatrix 3x3:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]); // Added a space for better formatting
        }
        printf("\n");  // New line after each row of the matrix
    }

        //Array 2 D of strings :
        char cars[][10]={"Mustang","Corvette","Camaro","BMW",};

        //cars[0]="Tesla";
        //String copy fuction needs  #include<string.h>
        strcpy(cars[0],"Tesla");

        for(int i = 0; i< sizeof(cars)/sizeof(cars[0]);i++)
        {  
            printf("%s\n",cars[i]);

        }
        
    return 0;
}