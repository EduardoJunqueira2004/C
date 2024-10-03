#include<stdio.h>
#include<string.h>
#include<math.h>

// Função para exibir o menu
void menu() {
    printf("|--------MENU--------|\n");
    printf("| 1. Describes anyone|\n");
    printf("| 2. Describes course|\n");
    printf("| 3. Math operations |\n");
    printf("| 4. Exit            |\n");
    printf("|--------------------|\n");
}

// Function to describe a person
void describe_anyone() {
    //variables
    char first_name[15], last_name[15], full_name[50], uni_name[50];
    int age, year, semester, card_ID;
    float weight, height;
    
    // clean the input buffer
    getchar();
    
    //Get my first name:
    printf("Enter your first name: ");
    fgets(first_name, sizeof(first_name), stdin);
    first_name[strcspn(first_name, "\n")] = 0;  // Remove a nova linha
    //Get my last name:
    printf("Enter your last name: ");
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strcspn(last_name, "\n")] = 0;  // Remove a nova linha
    //Get my full name:
    printf("Enter your full name: ");
    fgets(full_name, sizeof(full_name), stdin);
    full_name[strcspn(full_name, "\n")] = 0;  // Remove a nova linha
    //Get my university name
    printf("Enter your university name: ");
    fgets(uni_name, sizeof(uni_name), stdin);
    uni_name[strcspn(uni_name, "\n")] = 0;  // Remove a nova linha

    printf("Enter your year at University: ");
    scanf("%d", &year);

    printf("Enter your semester: ");
    scanf("%d", &semester);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("Enter your height (m): ");
    scanf("%f", &height);

    printf("Enter your card ID: ");
    scanf("%d", &card_ID);

    printf("\nYou are %s %s, studying in year %d, semester %d, at %s.\n", first_name, last_name, year, semester, uni_name);
    printf("You are %d years old, weigh %.2f kg, and are %.2f meters tall.\n", age, weight, height);
}

// Função para descrever o curso
void describe_course() {
    char uni_name[50], uni_si[4], schedule[50];
    
    // Limpa o buffer de entrada
    getchar();
    
    printf("Enter your university name: ");
    fgets(uni_name, sizeof(uni_name), stdin);
    uni_name[strcspn(uni_name, "\n")] = 0;  // Remove a nova linha

    printf("Enter the abbreviation (sigla) of your university: ");
    fgets(uni_si, sizeof(uni_si), stdin);
    uni_si[strcspn(uni_si, "\n")] = 0;  // Remove a nova linha

    printf("Describe your schedule: ");
    fgets(schedule, sizeof(schedule), stdin);
    schedule[strcspn(schedule, "\n")] = 0;  // Remove a nova linha

    printf("\nYour university is %s (%s) and your schedule is: %s\n", uni_name, uni_si, schedule);
}

// Função para realizar operações matemáticas
void math_operations() {
    double num1, num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("\nThe sum of the two numbers is: %.2lf", num1 + num2);
    printf("\nThe difference of the two numbers is: %.2lf", num1 - num2);
    printf("\nThe product of the two numbers is: %.2lf", num1 * num2);
    if (num2 != 0) {
        printf("\nThe division of the two numbers is: %.2lf", num1 / num2);
    } else {
        printf("\nDivision by zero is not allowed.");
    }
}

// Função principal
int main() {
    int option;
    
    do {
        menu();
        printf("Choose an option from the menu: ");
        scanf("%d", &option);
        
        switch(option) {
            case 1:
                describe_anyone();
                break;
            case 2:
                describe_course();
                break;
            case 3:
                math_operations();
                break;
            case 4:
                printf("\nThank you for using the program!\n");
                break;
            default:
                printf("\nInvalid option. Please choose a valid option.\n");
                break;
        }
    } while (option != 4);

    return 0;
}