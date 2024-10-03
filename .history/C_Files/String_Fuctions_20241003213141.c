#include<stdio.h>
#include<string.h>
#include<ctype.h>

// Função para converter string para minúsculas
void strlwr_custom(char *str)
{
    for(int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}

// Função para converter string para maiúsculas
void strupr_custom(char *str)

{
    for(int i = 0; str[i]; i++)
    {
        str[i] = toupper(str[i]);
    }
}

int main()
{
    char string1[] = "Bro";
    char string2[] = "Code";
    
    strlwr_custom(string1); // Converte string para minúsculas
    strupr_custom(string2); // Converte string para maiúsculas

    printf("%s\n", string1); // Saída: "bro"
    printf("%s\n", string2); // Saída: "CODE"
    
    return 0;
}