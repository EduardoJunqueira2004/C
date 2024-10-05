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
    
    return 0;
}