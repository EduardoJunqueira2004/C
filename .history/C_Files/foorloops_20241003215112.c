#include<stdio.h>

int main()
{
    //for loop = --> repeats a section of code a limited amount of times

    for(int index1 = 1; index1 <=10;index1++)
    {//code to be repeated

        printf("%d\n",index1);
        

    }
    /*for(int index2 = 1; index2 <=10;index2+=2)
    {//code to be repeated

        printf("%d\n",index2);
        

    }*/

    for(int index3 = 10 ; index3 >=1 ;index3--)
    {
        //code to be repeated
        printf("%d\n",index3);
    }
    return 0;
}