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
        /*if(grade == 'A')
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
            else if (grade == 'F')
            {
                printf("You failed\n");
            }
            else
            {
                printf("That's not a valid grade\n");
            }*/
            


switch(grade)
        {
            case 'A':
                    printf("Perfect!\n");
                    break;
            case 'B':
                    printf("You did good!\n");
                    break;
            case 'C':
                    printf("You did okay!\n");
                    break; 
            case 'D':
                    printf("At least it's not a F!\n");
                    break; 
            case 'F':
                    printf("You fail!\n");
                    break;    
            default:
                    printf("Please choose a correct grade to classify!");                                        
        }
        

        
    return 0;
}