#include <stdio.h>

void tower(int n,char s,char h,char d)
    {
    if(n==0) return; // ALL RODS ON C DISK, we can also also make a base for n==1
    tower(n-1,s,d,h);

    printf ("from %c -> %c \n",s,d); //INTERCHANGE RODS FOR NEW SCENARIO  
    tower(n-1,h,s,d);

    return;
    }

int main(){
    int n;
    printf ("enter the number of disk(s):");
    scanf ("%d", &n);
    tower(n,'A','B','C'); // CHARS ARE RODS
    return 0;
}