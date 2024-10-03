#include<stdio.h>

int main()
{
    /*
            Arithmetics_Operators= + addiction
                                    -  subtraction
                                    *   multiplication
                                    /   division
                                    %   modulus
                                    ++ increment
                                    -- decrement

    */
   int x = 5;
   int y= 2;
   int z= x+y;
   int z1= x*y;
   float z2= x/y;
   float z3 = x%y;


    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("x+y=%d\n",z);
    printf("x*y=%d\n",z1);
    printf("x/y=%f\n",z2);
    printf("x modulus y=%f\n",z3);

    return 0;
}