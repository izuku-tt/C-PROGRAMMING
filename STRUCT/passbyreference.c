#include <stdio.h>
#include <string.h>

typedef struct pokemon {
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
} pokemon;

void change(pokemon *p) {
    // (*p).hp = p -> hp
    p->hp     = 70;         //  (*p).hp = 70;
    p->attack = 80;         //(*p).attack = 80;
    p->speed  = 110;
    p->tier   = 'S';
    strcpy(p->name, "RAICHU");
}

int main() {
    pokemon pikachu = { 60, 70, 100, 'A', "Pikachu" };

    // Before change
    printf("Before change:\n");
    printf("  HP     : %d\n", pikachu.hp);
    printf("  Attack : %d\n", pikachu.attack);
    printf("  Speed  : %d\n", pikachu.speed);
    printf("  Tier   : %c\n", pikachu.tier);
    printf("  Name   : %s\n\n", pikachu.name);

    change(&pikachu);

    printf("After change:\n");
    printf("  HP     : %d\n", pikachu.hp);
    printf("  Attack : %d\n", pikachu.attack);
    printf("  Speed  : %d\n", pikachu.speed);
    printf("  Tier   : %c\n", pikachu.tier);
    printf("  Name   : %s\n", pikachu.name);

    return 0;
}