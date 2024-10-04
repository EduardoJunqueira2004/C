#include<stdio.h>

int main()
{
    char x = 'X';
    char y = 'Y';

    printf("x= %c\n",x);
    printf("y= %c\n",y);

    //how can I swap variables char in C?
    /*
        *To swap two char variables in C, you can use a temporary variable 
        *to hold the value of one of the variables while you swap them.
    */

   x = y;

    return 0;
}