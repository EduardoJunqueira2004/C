#include<stdio.h>
#include<string.h>

//Struct students to print name and gpa
struct Student
{
    char name[25];
    double gpa;
};

int main()
{
    /*
            *Array of Structs: An array of structs is an array in which each element is a struct
    */

    //Array of structs
    struct Student student1 ={"Spongebob",3.0};
    struct Student student2 ={"Patrick",2.5};
    struct Student student3 ={"Squidward",2.0};
    struct Student student4 ={"Sandy",3.5};
    struct Student student5 ={"Mr.Krabs",3.75};
    struct Student student6 ={"Plankton",2.25};
    struct Student student7 ={"Gary",3.25};
    struct Student student8 ={"Pearl",3.25};
    struct Student student9 ={"Larry",3.25};
    struct Student student10 ={"Mrs.Puff",3.25};
    struct Student student11 ={"Squilliam",3.25};
    struct Student student12 ={"Karen",3.25};

    //Array struct students
    struct Student students[12]={student1,student2,student3,student4,student5,student6,student7,student8,student9,student10,student11,student12};

    //For loop to print a array
    fo
    return 0;
}