#include<stdio.h>
#include<stdbool.h>//include the booleans 
int main()
{
    float c= 3.141592; //4bytes(4*8=32 bits of precision)6-7 digits
    double d =3.14159226535897;// 8 bytes(64 bits of precision) 15-16 digits;
    int j=2147483647; //4bytes(4*8=32 bits of precision)6-7 digits
    bool e =false; // 1 byte(1-->true or 0 false )%d 


    //display
    printf("%d\n",e);//bool have %d
    printf("%f\n",c);//float have %f
    printf("%lf\n",d);//double have %lf or int have ld
    printf("%d\n",j);//int have %d
    return 0;
}