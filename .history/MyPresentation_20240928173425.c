#include<stdio.h>
//My presentation in C
//Variables 
int age= 20;
char name[]="Eduardo";
char lastname[]="Junqueira";
char fullname[]="Eduardo Miguel Moreira Junqueira";
char campus[]="IPVC";
char school[]="ESTG";
char course []="ERSC";
char id[]="30241";
char email[]="eduardo.j@ipvc.pt";
char phone[]="914488870";
//Grades 1 to 20 in 3 Year 1 Semester;
float gradeC=15;
float gradeCS=15;
float gradePM=15;
float gradeVDER=15;
float gradeSEMB=12;
float gradeGPD=16;

void menu(){
//Menu Layout final:
//Menu Layout inicial:
    printf("\t------Presentation Student 30241 ERSC IPVC------\n");
    printf("\t Name :%s \n Age :%d Lastname: %s\n Fullname: %s\n Campus: %s\n School: %s\n Course: %s\n ID: %s\n Email: %s\n Phone: %s\n",name,age,lastname,fullname,campus,school,course,id,email,phone);
    printf("\t------------------------------------------------\n");
    printf("\t------------------------------------------------\n");
    //Menu Layout final:
    printf("\t------------------------------------------------\n");
    printf("\t------------------------------------------------\n");
    printf("\t------------------------------------------------\n");
    printf("\t| 1 - Change Name\n");
    printf("\t| 2 - Change Age\n");
    printf("\t| 3 - Change Lastname\n");
    printf("\t| 4 - Change Fullname\n");
    printf("\t| 5 - Change School\n");
    printf("\t| 6 - Change Course\n");
    printf("\t| 7 - Change Id\n");
    printf("\t| 8 - Change Email\n");
    printf("\t| 9 - Change Phone\n");
    printf("\t| 0 - Exit\n");
    printf("\t------------------------------------------------\n");
    printf("\t------------------------------------------------\n");
    printf("\t------------------------------------------------\n");
   
    }

int main(){
    menu();
     printf("\t| Choose an option: ");
    int option;
    scanf("%d",&option);
    
    //Menu Layout final:
    switch(option){
        case 1:
            printf("\t Enter your name:");
            scanf("%s",name);
            menu();
        case 2:
            printf("\t Enter your age:");
            scanf("%d",&age);
            break;
        case 3:
            printf("\t Enter your lastname:");
            scanf("%s",lastname);
            break;
        case 4:
            printf("\t Enter your fullname:");
            scanf("%s",fullname);
            break;
        case 5:
            printf("\t Enter your school:");
            scanf("%s",school);
            break;
        case 6:
            printf("\t Enter your course:");
            scanf("%s",course);
            break;
        case 7:
            printf("\t Enter your id:");
            scanf("%s",id);
            break;
        case 8:
            printf("\t Enter your email:");
            scanf("%s",email);
            break;
        case 9:
            printf("\t Enter your phone:");
            scanf("%s",phone);
            break;
        case 0: 
            printf("\t Exit\n");
            break;
        default:
            printf("\t Invalid option\n");
            break;

    }
return 0;

    }
