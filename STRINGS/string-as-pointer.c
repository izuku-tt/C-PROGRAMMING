#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "Izuku Midoriya";
    char *ptr = str; //points to first element 
    printf("The address of string is - %p\n", ptr);

    while(*ptr != '\0'){
        printf("The String - %c",*ptr);
        ptr++;

    }
    return 0;

}