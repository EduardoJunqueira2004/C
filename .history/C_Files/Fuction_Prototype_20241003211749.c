#include<stdio.h>

//Fuction hello
void hello(char [], int);//fuction prototype
int main()
{
    /*
            Fuction Prototype without a body
                                --> Ensures that calls to a fuction made with the correct arguments
    */
   printf("hello World");
   char name[] ="Eduardo";
   int age =20;
    hello(name,age);
    return 0;
}

//Move the fuction hello for the end of code
void hello(char name[], int age)
    {
    printf("Hello, my name is %s and I am %d years old.\n",name,age);    
    
    }