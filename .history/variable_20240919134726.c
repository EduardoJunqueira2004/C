#include<stdio.h>

int x;
x=123;
int age= 21;
float gpa=2.05;
double pi=3.14159265359;
char grade='A';
char phrase[]="Giraffe Academy";
_Bool isMale=1;

int main(){
    printf("Hello World!\n");
    printf("My name is Eduardo\n");
    printf("I am %d years old\n", age);
    printf("I got an %c in math\n", grade);
    printf("The value of pi is %f\n", pi);
    printf("My gpa is %f\n", gpa);
    return 0;
}