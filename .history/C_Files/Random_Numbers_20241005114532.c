#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    /*
        *Pseudo Random numbers = A set of values or elements that are statistically radom

                                (Don't use these for any ort of cryptographic security)
        *Without srand(time(0)): Every time you run the program, rand() will generate the same sequence of numbers.
        * For example, if you run the program now and again in an hour, it will generate the exact same numbers.
		*With srand(time(0)): You ensure that each time you run the program, 
        *it will generate a different sequence of random numbers because the seed is based on the current time.                        
    */

//include time
    srand(time(0));

    //Variables that give-me a random number between what I want to put in the code
    int number1 = (rand() % 6 + 1);//1-6 without +1 is just 0-5
    int number2 = (rand() % 6 + 1);//1-6 without +1 is just 0-5
    int number3 = (rand() % 6 + 1);//1-6 without +1 is just 0-5
        

    printf("The first random number is: %d\n",number1);
    printf("The second random number is: %d\n",number2);
    printf("%d\n",number3);


    return 0;
}