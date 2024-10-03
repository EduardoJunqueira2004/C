#include<stdio.h>

int main()
{
    /*
        Constant = Fixed value that cannot be altered by the program during its execution;
        Variables = Values that can be changed by the program during its execution;

    */
   float pi = 3.14159;

    pi = 420.733;
    const float PI = 2.232;
    PI = 3.14159; // Error: Assignment of read-only variable 'PI

   printf("%f\n",pi);
    return 0;
}