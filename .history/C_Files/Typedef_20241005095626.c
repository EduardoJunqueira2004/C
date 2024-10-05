#include<stdio.h>
#include<string.h>


//typedef  nickname!
//typedef char user[25];

//Struct with typedef
 struct user
{
    char name[25];
    char password[12];
    int id;
};
int main()
{
    /*
        *Typedef  = reserved keyword that gives an existing datatype an "nickname"
        *           typedef <existing datatype> <nickname>
    */

   //char user[25]="Eduardo";
   struct user user1 = {"Eduardo","1Qa2ws3ed4rf5tg@",12366};
   struct user user2 = {"John","0Plm",12367};

    return 0;
}