#include <stdio.h>
#include <string.h>
int main(){
    struct book{
        char name[30];
        float price;
        int pages;
    }b1,b2;
    b1.price = 345;
    b2.price = 401.3;
    printf("Enter the name of book: ");
    scanf(" %[^\n]",&b1.name);

    // strcpy(b1.name,"My Hero Academia");
    printf ("%s\n",b1.name);        // this will also print name of book 
    printf ("the price of b1 is %.3f\nthe price of b2 is %.3f",b1.price,b2.price);
    return 0;
}