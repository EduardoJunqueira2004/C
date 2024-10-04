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

   //.(dot) member access operator to access the members of the struct
   strcopy(player1.name, "John");
    player1.score = 100;

    strcopy(player1.name, "John");
    player1.score = 100;
   
    return 0;
}