#include<stdio.h>
#include<stdbool.h>
int main()
{
    float c= 3.141592; //4bytes(4*8=32 bits of precision)6-7 digits
    double d =3.14159226535897;// 8 bytes(64 bits of precision) 15-16 digits;
    int j=2147483647; //4bytes(4*8=32 bits of precision)6-7 digits
    bool e =true; // 1 byte(true or false )%d 


    //display
    printf("%d\n",e);//bool have %d
    printf("%f\n",c);//float have %f
    printf("%d\n",d);//double have %d
    printf("%d\n",j);//int have %d
    return 0;
}