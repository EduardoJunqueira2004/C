#include<stdio.h>
#include<math.h>
#include<string.h>

//Program to describes anyone  and her course and do math operations with fuctions
//Program that have a menu 
//Program have a big base of data about my course
//Program for anyone can use and input that he likes

void menu()
{
    printf("|--------MENU--------|\n");
    printf("| 1. Describes anyone|\n");
    printf("| 2. Describes course|\n");
    printf("| 3. Math operations |\n");
    printf("| 4. Exit            |\n");
    printf("|--------------------|\n");


}

void print()
{
    printf("Hello World");
    //printf("Name: %s\n",first_name);
    //printf("Last name: %s\n",last_name);

}
int main()
{
    //Variables
    char first_name[15],last_name[15],full_name[50],uni_name[50],uni_si[4],schedule[50] ;
    int age,year,semester,card_ID;
    float weight,height;
    int num1,num2;
    menu();
    printf("Choose one option of this menu!");
    int option;
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        printf("| 1. Describes anyone|\n");
        printf("\nEnter your first name: ");
        fgets("%c",15,stdin);
        printf("\nEnter your last name: ");
        fgets("%c",15,stdin);
        printf("\nEnter your full name: ");
        fgets("%c",50,stdin);
        printf("\nEnter your university name: ");
        fgets("%c",50,stdin);
        printf("\nEnter your year at University: ");
        scanf("%d",&year);
        printf("\nEnter your semester: ");
        scanf("%d",&semester);
        printf("\nEnter your age: ");
        scanf("%d",&age);
        printf("\nEnter your weight: ");
        scanf("%f",&weight);
        printf("\nEnter your height: ");
        scanf("%f",&height);
        printf("\nEnter your card ID:");
        scanf("%d",&card_ID);
        print();
        case2:
        printf("\n| 2. Describes course|\n");
        printf("\nYour university have the name:  %s",uni_name);
        printf("\nYour year at university is: %d",year);
        printf("\nYour semester is: %d",semester);
        printf("\nYour sigla of your University  is : %s",uni_si);
        printf("\nYour schedule is good or not good?, and why not?");
        fgets("%c",50,stdin);
        print();
        case 3:
        printf("| 3. Math operations |\n");
        printf("Enter the first number:");
        scanf("%lf",&num1);
        printf("Enter the second number:");
        scanf("%lf",&num2);
        printf("The sum of the two numbers is: %lf\n",num1+num2);
        printf("The difference of the two numbers is: %lf\n",num1-num2);
        printf("The product of the two numbers is: %lf\n",num1*num2);
        printf("The division of the two numbers is: %lf\n",num1/num2);
        printf("The remainder of the two numbers is: %lf\n",num1%num2);









    return 0;
}