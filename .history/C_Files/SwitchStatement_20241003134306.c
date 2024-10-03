#include<stdio.h>


int main()
{
    /*
    
            Switch = A more efficient alternative to using many  "else if" statements
                    Allows a value to be tested for equality many cases
    */
        char grade;
   
            printf("Enter your grade: ");
        scanf("%c",&grade);

            if(grade == 'A')
            {
                printf("Perfect!\n");
            }
            else if(grade == 'B')
            {
                printf("You did good\n");
            }
            else if(grade == 'C')
            {
                printf("You did okay\n");
            }
            else if (grade== 'D')
            {
                printf("At least it's not an F\n");
            }
            
/*
switch(grade)
        {
            case 1:
                    printf("");
                    break;
            case 2:
                    printf();
                    break;
            case 3:
                    printf();
                    break; 
            case 4:
                    printf();
                    break; 
            case 5:
                    printf();
                    break;                                      
        }*/
        

        
    return 0;
}