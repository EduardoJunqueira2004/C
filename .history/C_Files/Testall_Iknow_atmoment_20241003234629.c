#include<stdio.h>
#include<string.h>
#include<math.h>

// Fuction to print menu
void menu() 
{
    printf("\n|--------MENU--------|\n");
    printf("| 1. Describes anyone|\n");
    printf("| 2. Describes course|\n");
    printf("| 3. Math operations |\n");
    printf("| 4. Exit            |\n");
    printf("|--------------------|\n");
}

// Function to describe a person
void describe_anyone() 
{
    //variables
    char first_name[15], last_name[15], full_name[50], uni_name[50];
    int age, year, semester, card_ID;
    float weight, height;
    
    // clean the input buffer
    getchar();
    
    //Get my first name:
    printf("Enter your first name: ");
    fgets(first_name, sizeof(first_name), stdin);
    first_name[strcspn(first_name, "\n")] = 0;  // Clean the new line
    //Get my last name:
    printf("Enter your last name: ");
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strcspn(last_name, "\n")] = 0;  // Clean the new line
    //Get my full name:
    printf("Enter your full name: ");
    fgets(full_name, sizeof(full_name), stdin);
    full_name[strcspn(full_name, "\n")] = 0;  // Clean the new line
    //Get my university name:
    printf("Enter your university name: ");
    fgets(uni_name, sizeof(uni_name), stdin);
    uni_name[strcspn(uni_name, "\n")] = 0;  // Clean the new line
    //Get my year at University:
    printf("Enter your year at University: ");
    scanf("%d", &year);
    //Get my  semester at University:
    printf("Enter your semester: ");
    scanf("%d", &semester);
    //Get my age:
    printf("Enter your age: ");
    scanf("%d", &age);
    //get my weight:
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    //get my height:
    printf("Enter your height (m): ");
    scanf("%f", &height);
    //get my  card ID at University:
    printf("Enter your card ID: ");
    scanf("%d", &card_ID);
    //Finally information
    printf("\nYou are %s %s, studying in year %d, semester %d, at %s.\n", first_name, last_name, year, semester, uni_name);
    printf("You are %d years old, weigh %.2f kg, and are %.2f meters tall.\n", age, weight, height);
}

// Function to describe my course
void describe_course() 
{
    char uni_name[50], uni_si[5], schedule[50];
    
    //clean the  input buffer
    getchar();
    
    printf("Enter your university name: ");
    fgets(uni_name, sizeof(uni_name), stdin);
    uni_name[strcspn(uni_name, "\n")] = 0;  // Clean the new line

    printf("Enter the abbreviation of  your (\"sigla\") of your university: ");
    fgets(uni_si, sizeof(uni_si), stdin);
    uni_si[strcspn(uni_si, "\n")] = 0;  // Clean the new line

    printf("Describe your schedule: ");
    fgets(schedule, sizeof(schedule), stdin);
    schedule[strcspn(schedule, "\n")] = 0; // Clean the new line

    printf("\nYour university is %s (%s) and your schedule is: %s\n", uni_name, uni_si, schedule);
}

// Function do do math operations 
void math_operations() 
{
    double num1, num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("\nThe sum of the two numbers is: %.2lf", num1 + num2);
    printf("\nThe difference of the two numbers is: %.2lf", num1 - num2);
    printf("\nThe product of the two numbers is: %.2lf", num1 * num2);
    if (num2 != 0) {
        printf("\nThe division of the two numbers is: %.2lf \n", num1 / num2);
    } else {
        printf("\nDivision by zero is not allowed.");
    }
}

// Fuction main debug of code
int main() 
{
    //Variables main
    int option;
    
    do 
    {
        menu();
        printf("Choose an option from the menu: ");
        scanf("%d", &option);
        
        switch(option) 
        {
            case 1:
            //tell the fuction describe_anyone();
                describe_anyone();
                break;
            case 2:
            //tell the fuction describe_course();
                describe_course();
                break;
            case 3:
            //tell the fuction math_operations();
                math_operations();
                break;
            case 4:
                printf("\nThank you for using the program!\n");
                p
                break;
            default:
                printf("\nInvalid option. Please choose a valid option.\n");
                break;
        }
    } while (option != 4);

    return 0;
}