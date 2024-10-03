#include<stdio.h>
#include<string.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char string1[]="Bro";
    char string2[]="Code";
    
    strlwr(string1); // converts a string to lowercase
    strupr(string2); // converts a string to uppercase

    printf("%s",string1);
    printf("%s",string2);
    return 0;
}