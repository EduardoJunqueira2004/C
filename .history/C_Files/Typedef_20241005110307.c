#include<stdio.h>
#include<string.h>


//typedef  nickname!
//typedef char user[25];

//Struct normal
struct user
{
    char name[25];
    char password[12];
    int id;
};

/* //Struct with typedef
typedef struct user user;
{
    char name[25];    

} User;*/
    //Struct with typedef


int main()
{
    /*
        *Typedef  = reserved keyword that gives an existing datatype an "nickname"
        *           typedef <existing datatype> <nickname>
    */

   //char user[25]="Eduardo";
   //user user1 = {"Eduardo"};
    //user user2 = {"John"};
    
     //printf("User 1: %s\n", user1);
     //printf("User 2: %s\n", user2);
    
     //Struct normal can give more values that 
   struct user user1 = {"Eduardo","1Qa2ws3ed4rf5tg@",12366};
   //struct user user2 = {"John","0Plm9Okn8Ijb7Uhv",12367};

    return 0;
}