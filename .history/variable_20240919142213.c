#include<stdio.h>
//My presentation in C
//Variables 
int age= 20;
char name[]="Eduardo Junqueira";
float gradeC=15;
float gradeCS=15;
float gradePM=15;
float gradeVDER=15;
float gradeSEMB=12;
float gradeGPD=16;


//Menu Layout final:
    printf("\t------------------------------------------------\n");
    printf("\t| 1 - Change Name\n");
    printf("\t| 2 - Change Age\n");
    printf("\t| 3 - Change Grade C\n");
    printf("\t| 4 - Change Grade CS\n");
    printf("\t| 5 - Change Grade PM\n");
    printf("\t| 6 - Change Grade VDER\n");
    printf("\t| 7 - Change Grade SEMB\n");
    printf("\t| 8 - Change Grade GPD\n");
    printf("\t| 9 - Exit\n");
    printf("\t------------------------------------------------\n");
    //Menu Layout final:
    printf("\t------------------------------------------------\n");
    printf("\t| Choose an option: ");
    int option;
    scanf("%d",&option);
    printf("\t------------------------------------------------\n");
int main(){
    //Menu Layout inicial:
    printf("\t------Presentation Student 30241 ERSC IPVC------\n");
    printf("\t Name :%s \n Age :%d \n Grade C :%.2f \n Grade CS :%.2f \n Grade PM :%.2f \n Grade VDER :%.2f \n Grade SEMB :%.2f \n Grade GPD :%.2f \n ",name,age,gradeC,gradeCS,gradePM,gradeVDER,gradeSEMB,gradeGPD);
    printf("\t------------------------------------------------\n");

    
    //Menu Layout final:
    switch(option){
        case 1:
            printf("\t Enter your name:");
            scanf("%s",name);
            break;
        case 2:
            printf("\t Enter your age:");
            scanf("%d",&age);
            break;
        case 3:
            printf("\t Enter your grade C:");
            scanf("%f",&gradeC);
            break;
        case 4:
            printf("\t Enter your grade CS:");
            scanf("%f",&gradeCS);
            break;
        case 5:
            printf("\t Enter your grade PM:");
            scanf("%f",&gradePM);
            break;
        case 6:
            printf("\t Enter your grade VDER:");
            scanf("%f",&gradeVDER);
            break;
        case 7:
            printf("\t Enter your grade SEMB:");
            scanf("%f",&gradeSEMB);
            break;
        case 8:
            printf("\t Enter your grade GPD:");
            scanf("%f",&gradeGPD);
            break;
        case 9:
            printf("\t Exiting...");
            break;
        default:
            printf("\t Invalid option");
            break;
            

    }

}