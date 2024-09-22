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
    printf("\t| Choose an option: ");
    int option;
    scanf("%d",&option);
    printf("\t------------------------------------------------\n");
    printf("\t------------------------------------------------\n");
    printf("\t| 1 - Change Name\n");
    printf("\t| 2 - Change Age\n");
    printf("\t| 3 - Change Lastname\n");
    printf("\t| 4 - Change Fullname\n");
    printf("\t| 5 - Change school\n");
    printf("\t| 6 - Change course\n");
    printf("\t| 7 - Change id\n");
    printf("\t| 8 - Change email\n");
    printf("\t| 9 - Change phone\n");
    printf("\t| 0 - Exit\n");
    printf("\t------------------------------------------------\n");
    }

int main(){
    int opcao;
    do{
    menu();
    scanf("%d",&opcao);
    //Menu Layout final:
    switch(opcao){
        case 1:
            printf("\t Enter your name:");
            scanf("%s",name);
            break;
        case 2:
            printf("\t Enter your age:");
            scanf("%d",&age);
            break;


return 0;
}
}
}

