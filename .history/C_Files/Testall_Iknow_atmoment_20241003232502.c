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
    menu();
    printf("Choose one option of this menu!");
    int option;
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        printf("| 1. Describes anyone|\n");
        printf("Enter your first name:");
        fgets("%c",15,stdin);
        printf("Enter your last name:");
        fgets("%c",15,stdin);
        printf("Enter your full name:");
        fgets("%c",50,stdin);
        printf("Enter your university name:");
        fgets("%c",50,stdin);
        printf("Enter your year at University:");
        scanf("%d",&year);
        printf("Enter your semester:");
        scanf("%d",&semester);
        printf("Enter your age:");
        scanf("%d",&age);
        printf("Enter your weight:");
        scanf("%f",&weight);
        printf("Enter your height:");
        scanf("%f",&height);
        printf("Enter your card ID:");
        scanf("%d",&card_ID);
        print();
        case2:
        printf("Your university have the name:  %s\n",uni_name);
        printf("Your year at university is: %d\n",year);
        printf("Your semester is: %d\n",semester);
        printf("Your sigla of your University  is : %s\n",uni_si);
        printf("Your schedule is good or noot good?, and why not?");
        fgets("%c",50,stdin);
        print();
        case 3:











    return 0;
}