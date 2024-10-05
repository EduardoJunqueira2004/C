#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    /*
        *Pseudo Random numbers = A set of values or elements that are statistically radom

                                (Don't use these for any ort of cryptographic security)
    */


    //Variables that give-me a random number between what I want to put in the code
    int number1 = (rand() % 6 + 1);//1-6 without +1 is just 0-5

    //include time
    srand(time(0));

    printf("%d",number1);


    return 0;
}