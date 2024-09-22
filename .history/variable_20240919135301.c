#include<stdio.h>
#include<string.h>


int x=123;

int age= 20;
float gpa=2.05;
double pi=3.14159265359;
char grade='A';
char phrase[]="Giraffe Academy";
char name[]="John Doe";
_Bool isMale=1;

int main(){
    printf("Hello World!\n");
    printf("My name is %s\n");
    printf("I am %d years old\n", age);
    printf("I got an %c in math\n", grade);
    printf("The value of pi is %f\n", pi);
    printf("My gpa is %f\n", gpa);
    printf("--------Summary--------");
    printf("Hello, My name is %s\n", name);
    return 0;
}