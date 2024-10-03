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
            Augmented assignment operators = used to replace a statement =
            += addition and assignment              
            -= subtraction and assignment
            *= multiplication and assignment
            /= division and assignment
            %= modulus and assignment

    */
   int a=10;
   int a1 =10;
   int a2 =10;
   int a3 =10;
   int a4 =10;
    a+=1; // += addition and assignment tho int a = a+1;
    a1-=1; // -= subtraction and assignment to int a= a-1;
    a2*=2; // *= multiplication and assignment to int a= a*2;
    a3/=2;// /=division and assignment to  int a= a/2;
    a4%=2; // %= modulus and assignment to int a= a%2;
   int x = 5;
   int y= 2;
   x++;
   y--;
   int z= x+y;
   int z1= x*y;
   float z2= x/(float)y;//show the decimal after,!
   int z3 = x % y;


    printf("a=%d\n",a);
    printf("a1=%d\n",a1);
    printf("a2=%d\n",a2);
    printf("a3=%d\n",a3);
    printf("a4=%d\n",a4);
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("x+y=%d\n",z);
    printf("x*y=%d\n",z1);
    printf("x/y=%f\n",z2);
    printf("x modulus y=%d\n",z3);

    return 0;
}