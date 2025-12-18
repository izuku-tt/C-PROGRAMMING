#include <stdio.h>
int main(){
    struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
    }pikachu,charizard;     // another way to create data types 

    pikachu.hp = 50; 
    pikachu.attack = 60;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    charizard.hp = 80;
    charizard.attack = 130;
    charizard.speed = 80;
    charizard.tier = 'S';

    printf("charizard attack=%d\nCharizard tier is %c",charizard.attack,charizard.tier);

    return 0;
}