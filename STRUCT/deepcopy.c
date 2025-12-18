#include <stdio.h>
#include <string.h>
typedef struct pokemon{
    char name[15];
    int hp;
    int attack;
    int speed;
    char tier;
}pokemon;
int main(){
    pokemon a = {"Pikachu" ,70,100,150,'A'};
    pokemon b,c;
    b = a;
    c = b;
    strcpy(b.name,"Blastoise");
    strcpy(c.name,"charmeleon");

    printf("Name : %s\n",a.name);
    printf ("Hp : %d\n",a.hp);
    printf ("Attack : %d\n",a.attack);
    printf("Speed : %d\n",a.speed);
    printf("Tier : %c\n\n",a.tier);

    printf("Name : %s\n",b.name);
    printf ("Hp : %d\n",b.hp);
    printf ("Attack : %d\n",b.attack);
    printf("Speed : %d\n",b.speed);
    printf("Tier : %c\n\n",b.tier);

    printf("Name : %s\n",c.name);
    printf ("Hp : %d\n",c.hp);
    printf ("Attack : %d\n",c.attack);
    printf("Speed : %d\n",c.speed);
    printf("Tier : %c\n\n",c.tier);

    return 0;
}