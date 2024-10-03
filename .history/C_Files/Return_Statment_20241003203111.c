#include<stdio.h>

double square(double x)
{
    double result = x * x;
    return result; //when I return something , it's not void it's the variable that I use
    
}
int main()
{
    /*
            return = returns a value back to a calling fuction!

    */
    double x = square(3.14);
   printf("%lf",x);
    return 0;
}