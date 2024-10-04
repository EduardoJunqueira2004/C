#include<stdio.h>
#include<string.h>

int main()
{
    // Swap two character variables
    char x = 'X';
    char y = 'Y';
    char temp;

    // Swapping the values of x and y
    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    // Character arrays (strings)
    char name1[] = "John";
    char name2[] = "Miguel";
    char temp2[10];  // Ensure temp2 is large enough to hold the largest string + '\0'

    // strcpy is used to copy the contents of one string to another.
    // Its syntax is strcpy(destination, source), where destination is the destination string and source is the source string.
    strcpy(temp2, name1);   // Copy name1 to temp2
    strcpy(name1, name2);   // Copy name2 to name1
    strcpy(name2, temp2);   // Copy temp2 (which holds name1) to name2

    // Print the swapped strings
    printf("name1 = %s\n", name1);
    printf("name2 = %s\n", name2);

    return 0;
}