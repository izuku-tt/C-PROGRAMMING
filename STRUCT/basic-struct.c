#include <stdio.h>
int main(){
    struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
    };

    struct pokemon pikachu;     //pokemon is class, pikachu and charizard are objects
    pikachu.hp = 50; 
    pikachu.attack = 60;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    // user input - scanf("%d", &pikachu.attack)

    struct pokemon charizard;
    charizard.hp = 80;
    charizard.attack = 130;
    charizard.speed = 80;
    charizard.tier = 'S';

    printf("charizard attack=%d\nCharizard tier is %c",charizard.attack,charizard.tier);

    return 0;
}