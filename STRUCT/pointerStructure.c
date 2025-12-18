#include <stdio.h>
#include <string.h>
int main (){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[20];
    } pokemon;
    pokemon pikachu = {60,70,100,'A',"Pikachu"};
    printf("%d\n", pikachu.hp);
    pokemon* x = &pikachu;
    (*x).hp  = 70;
    (*x).attack = 120;
    printf("hp - %d", pikachu.hp);
    return 0;
}