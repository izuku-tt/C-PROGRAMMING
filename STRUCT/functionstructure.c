#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    char name[15];
    int hp;
    int attack;
    int speed;
    char tier;
} pokemon;

void fun(pokemon p){        //pass by value - does not change original struct value. need pointer for that
printf("HP : %d\n",p.hp);
printf("Tier : %c", p.tier);
}

void change(pokemon p){
    p.hp = 70;
    p.attack = 70;
    fun(p);
    return;
}
int main(){
    pokemon pikachu,charizard;
    pikachu.hp = 60;
    pikachu.tier  = 'A';
    charizard.hp = 100;
    change(pikachu);
    return 0;
}