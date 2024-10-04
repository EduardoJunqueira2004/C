#include<stdio.h>
#include<string.h>

int main()
{
    /*
            While loop --> repeats a section of code possibly unlimited times.
            While some conditions remains true
            a while loop might not execute at all
            summary:checks a condition, THEN executes a block of code if condition is true

            Do While loop --> always  executes the block of code at least once, Then check a condition!
    */
// while loop example
   char name[25];

   printf("What's your name: ");
   fgets(name,25,stdin);
   name[strlen(name) -1]='\0';

    //Force something with loop While
    while(strlen(name) == 0)//While this condition  is true run the code
    {
        printf("You didn't not enter your name");
        printf("What's your name: ");
        fgets(name,25,stdin);
        name[strlen(name) -1]='\0';
    }
   printf("Hello %s",name);

//Do while loop example
int number = 0;
int sum = 0;

//Other Example a while loop
/*while (number >0)//If number =<0 then stop
{
    printf("Number a number above 0:");
    scanf("%d",&number);
    if(number  > 0)
    {
        sum = sum + number;
        //sum +=number
    }

}*/


//But now I need to do  a  do while loop
//Do while loop


do
{
    
    printf("Number a number above 0:");
    scanf("%d",&number);
    if(number  > 0)
    {
        sum = sum + number;
        //sum +=number
    }

}while (number >0);//If number =<0 then stop
printf("\nsum: %d",sum);

    return 0;
}
