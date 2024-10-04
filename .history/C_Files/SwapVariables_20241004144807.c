#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    // Swap two char variables
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x= %c\n", x);
    printf("y= %c\n", y);

    // Character arrays (ensure enough space to store the longest string + '\0')
    char name[20] = "John";  // Allocating enough space for potential new strings
    char name2[20] = "Miguel";  // Same here, space for the largest string

    // Allocate memory dynamically to swap strings
    char *temp2 = (char *)malloc(strlen(name) + 1);  // Allocate enough space for the first string

    if (temp2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Swap strings using strcpy
    strcpy(temp2, name);   // Copy name1 to temp2
    strcpy(name, name2);   // Copy name2 to name1
    strcpy(name2, temp2);  // Copy temp2 (which holds name1) to name2

    // Print the swapped strings
    printf("name1 = %s\n", name);
    printf("name2 = %s\n", name2);

    // Free the dynamically allocated memory
    free(temp2);

    return 0;
}