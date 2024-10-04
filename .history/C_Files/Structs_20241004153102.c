#include<stdio.h>
#include<string.h>

struct Player
{
    char name[12];
    int score;

};

int main()
{
    /*
            *Structs = collections of related members ("variables")
            *they can be of different types of data
            *they can be used to create complex data structures
            *listed under  one name in a block of memory
            *very similar to classes in other languages(but no methods)
    */

   struct Player player1;
   struct Player player2;
   struct Player player3;
   struct Player player4;
   struct Player player5;

   //.(dot) member access operator to access the members of the struct
   strcpy(player1.name, "John");
    player1.score = 100;

    strcpy(player2.name, "Eduardo");
    player2.score = 200;
    //strcpy(player3.name, "John"); //error: redefinition of 'player3'
    //player3.score = 300;
    //strcpy(player4.name, "John"); //error: redefinition of 'player4'
    //player4.score = 400;
    //strcpy(player5.name, "John"); //error: redefinition of 'player5'
    //player5.score = 500;


    //print  to print the player1 and player2
    printf("The name of Player 1 is: %s and his score is %d\n", player1.name, player1.score);
    printf("The name of Player 2 is: %s and his score is %d\n", player2.name, player2.score);
    

   
    return 0;
}