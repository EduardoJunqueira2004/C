#include<stdio.h>
#include<math.h>//I can assec a Math operations like sqrt(), pow, round, ceil, floor, fabs etc..
int main()
{
    double A= sqrt(9),B= pow(2,4),F= fabs(-100),G= log(3),H,I,J;
    int C= round(3.14),D= ceil(3.14),E= floor(3.99);

    printf("\n A= sqrt(9)%lf",A);
    printf("\nB= pow(2,4)%lf",B);
    printf("\n%d",C);
    printf("\n%d",D);
    printf("\n%d",E);
    printf("\n%lf",F);
    printf("\n%lf",G);
    printf("\n%lf",H);
    printf("\n%lf",I);
    printf("\n%lf",J);
    return 0;

}