#include<stdio.h>
#include<string.h>


//typedef  nickname!
//typedef char user[25];

//Struct normal
/*struct user
{
    char name[25];
    char password[25];
    int id;
};*/

 //Struct with typedef
typedef struct
{
    char name[25]; 
    char password[25];
    int id;   

} user;//nickname create



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
    
    /*
     //Struct normal can give more values that I want to put
   struct user user1 = {"Eduardo","1Qa2ws3ed4rf5tg@",12366};
   struct user user2 = {"John","0Plm9Okn8Ijb7Uhv",12367};
   printf("User 1: \nName: %s \nPassword: %s \nID: %d\n", user1.name, user1.password,user1.id);
    printf("User 2: \nName: %s \nPassword: %s \nID: %d\n", user2.name,user2.password,user2.id);
*/
    //Struct with typedef only use nickname 
    user user1 = {"Eduardo","1Qa2ws3ed4rf5tg@",12366};
    user user2 = {"John","0Plm9Okn8Ijb7Uhv",12367};
    printf("User 1: \nName: %s \nPassword: %s \nID: %d\n", user1.name, user1.password,user1.id);
    printf("User 2: \nName: %s \nPassword: %s \nID: %d\n", user2.name,user2.password,user2.id);

    return 0;
}