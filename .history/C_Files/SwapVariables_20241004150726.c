#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char x = 'X';
    char y = 'Y';
    char temp;//temporary variable to hold the value of one of the variables while you swap them
 temp = x;
 x = y;
y=temp;


    printf("x= %c\n",x);
    printf("y= %c\n",y);

    //Charater of arrays
    char name[20] = "John";
    char name2[20]= "Miguel";
    
    // Allocate memory dynamically to swap strings
    char *temp2 = (char *)malloc(strlen(name) + 1);  // Allocate enough space for the first string

    if (temp2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }


//strcpy--> string copy function what I use to swap the variables?
/*
    *strcpy is used to copy the contents of one string to another. 
    *Its syntax is strcpy(dest, src), 
    *where dest is the destination string and src is the source string.
*/
    strcpy(temp2, name);
    strcpy(name, name2);
    strcpy(name2, temp2);

    //how can I swap variables char in C?
    /*
        *To swap two char variables in C, you can use a temporary variable 
        *to hold the value of one of the variables while you swap them.
    */
// Print the swapped strings
    printf("name1 = %s\n", name);
    printf("name2 = %s\n", name2);
// Free the dynamically allocated memory
    free(temp2);

    return 0;
}