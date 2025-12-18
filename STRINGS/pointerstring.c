#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Izuku Midoriya>>Katsuki Bakugo";
    char* ptr = str;// point to first element of string
    printf("%s",ptr);
    printf("\n");
    ptr = "Katsuki Bakugo<<Izuku Midoriya";
    printf("%s",ptr);
    return 0;
}