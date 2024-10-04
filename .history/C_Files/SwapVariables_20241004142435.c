#include<stdio.h>

int main()
{
    char x = 'X';
    char y = 'Y';
    char temp;//temporary variable to hold the value of one of the variables while you swap them
 temp = x;
 x = y;
y=temp;


    printf("x= %c\n",x);
    printf("y= %c\n",y);

    //

    //how can I swap variables char in C?
    /*
        *To swap two char variables in C, you can use a temporary variable 
        *to hold the value of one of the variables while you swap them.
    */



    return 0;
}