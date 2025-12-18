#include <stdio.h>
typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
    } pokemon;
int main(){
    pokemon arr[5];
    arr[0].hp = 80;
    arr[0].attack = 50;
    arr[0].speed = 100;
    arr[0].tier = 'A';

    arr[1].hp = 80;
    arr[1].attack = 50;
    arr[1].speed = 95;
    arr[1].tier = 'A';

    arr[2].hp = 150;
    arr[2].attack = 200;
    arr[2].speed = 100;
    arr[2].tier = 'S';

    arr[3].hp = 80;
    arr[3].attack = 50;
    arr[3].speed = 70;
    arr[3].tier = 'B';

    arr[4].hp = 500;
    arr[4].attack = 350;
    arr[4].speed = 100;
    arr[4].tier = 'G';

    for(int i = 0;i<5;i++){
        if(i==0){
            printf("Hitpoint of %dst pokemon is %d\n", i+1,arr[i].hp);
            printf("Attack of %dst pokemon is %d\n", i+1,arr[i].attack);
            printf("Speed of %dst pokemon is %d\n", i+1,arr[i].speed);
            printf("Tier of %dst pokemon is %c\n", i+1,arr[i].tier);
            printf("\n");
        }
        else if(i==1){
            printf("Hitpoint of %dnd pokemon is %d\n", i+1,arr[i].hp);
            printf("Attack of %dnd pokemon is %d\n", i+1,arr[i].attack);
            printf("Speed of %dnd pokemon is %d\n", i+1,arr[i].speed);
            printf("Tier of %dnd pokemon is %c\n", i+1,arr[i].tier);
            printf("\n");
        }
        else if(i==2){
            printf("Hitpoint of %drd pokemon is %d\n", i+1,arr[i].hp);
            printf("Attack of %drd pokemon is %d\n", i+1,arr[i].attack);
            printf("Speed of %drd pokemon is %d\n", i+1,arr[i].speed);
            printf("Tier of %drd pokemon is %c\n", i+1,arr[i].tier);
            printf("\n");
        }
        else{
            printf("Hitpoint of %dth pokemon is %d\n", i+1,arr[i].hp);
            printf("Attack of %dth pokemon is %d\n", i+1,arr[i].attack);
            printf("Speed of %dth pokemon is %d\n", i+1,arr[i].speed);
            printf("Tier of %dth pokemon is %c\n", i+1,arr[i].tier);
            printf("\n");
        }
    }
    return 0;
}