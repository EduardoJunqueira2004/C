#include<stdio.h>
#include<math.h>

int main()
{
    //Variables to calcs
    char operator;
    double num1,num2,result;

        printf("Enter an operator (+ - * /): ");
    scanf("%c",&operator);
        printf("Enter number 1: ");
    scanf("%lf",&num1); 
        printf("Enter number 2: ");
    scanf("%lf",&num2);
    //Exam a operator
    switch (operator)
    {
    case '+':
        result= num1+num2;
        printf("The result of %lf + %lf = %lf ",num1,num2,result);
        break;
        case '-':

        break;
        case '*':
        break;
        case '/':
        break;
    
    default:
    printf("Please select a valid operator (+ - * /): ");
        break;
    }
    return 0;
}