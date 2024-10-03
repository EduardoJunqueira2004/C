#include<stdio.h>
#include<math.h>//I can assec a Math operations like sqrt(), pow, round, ceil, floor, fabs,log,sign, cos, tan etc..
int main()
{
    double A= sqrt(9),B= pow(2,4),F= fabs(-100),G= log(3),H=sin(45),I=cos(45),J=tan(45);
    int C= round(3.14),D= ceil(3.14),E= floor(3.99);

    printf("\n A= sqrt(9) %lf",A);
    printf("\n B= pow(2,4) %lf",B);
    printf("\n C= round(3.14) %d",C);
    printf("\n D= ceil(3.14) %d",D);
    printf("\n E= floor(3.99) %d",E);
    printf("\n F= fabs(-100) %lf",F);
    printf("\n G= log(3) %lf",G);
    printf("\n H=sin(45) %lf",H);
    printf("\n I=cos(45) %lf",I);
    printf("\n J=tan(45) %lf",J);

    //Cirfunference and  of circle

    const double PI =3.14159;//It's a constant value, anyone can 't change it.
    double radius,circumference;
    printf("\n Enter the radius of circle:\n");
    scanf("%lf",&radius);
    circumference=2*PI*radius;
    printf("\n The area of circle is: %lf ",circumference);
    return 0;

}