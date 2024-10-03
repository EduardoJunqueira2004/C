#include<stdio.h>

//Fuction to find the max

int findMax(int x, int y)
{
    /*
    if(x >y)
    {
        return x;
    }
    else
    {
        return y;
    }
    */
    if(x >y)
    {
        return x;
    }
    else
    {
        return y;
    }
    // shortcut for the if/else behind 
    return(x>y) ? x : y;
}
int main()
{
    /*
                Ternary operator = shortcut to if/else when assigning/returning a value
                Syntax: condition ? value_if_true : value_if_false
    */
   //Variable to find a max of one variable
   int max = findMax(2,4);

    printf("%d", max);

    return 0;
}