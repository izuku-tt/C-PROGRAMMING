#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct pokemon{
        char name[15];
        int hp;
        int attack;
        int speed;
        char tier;
    } pokemon;

    typedef struct legendaryPokemon{
        pokemon normal;
        char ability[18];
    } legendarypokemon;
    legendarypokemon a = {{"Mewtwo",150, 180, 180,'S'},"Pressure"};

    printf("Name: %s\n", a.normal.name);
    printf("HP: %d\n", a.normal.hp);
    printf("Attack: %d\n", a.normal.attack);
    printf("Speed: %d\n", a.normal.speed);
    printf("Tier: %c\n", a.normal.tier);
    printf("Ability: %s\n", a.ability);

    typedef struct GodPokemon{
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon G = {{{"Arceus",120,120,120,'G'},"TURNS INTO STONE"},300};

    printf("\nGod Pokemon Stats:\n");
    printf("Name: %s\n", G.legend.normal.name);
    printf("HP: %d\n", G.legend.normal.hp);
    printf("Attack: %d\n", G.legend.normal.attack);
    printf("Speed: %d\n", G.legend.normal.speed);
    printf("Tier: %c\n", G.legend.normal.tier);
    printf("Ability: %s\n", G.legend.ability);
    printf("Special Attack: %d\n", G.specialattack);
    return 0;
}