#include <stdio.h>
#include <string.h>
int main(){
    char* str = "Midoriya";
    int X = strlen(str);                            // calculate length of string
    printf("length = %d\n",X);

    char source[] = "akhtar raza";
    char destination[12];
    strcpy(destination,source);                     // copy two strings and saves it in first (destination)
    printf("%s\n",destination);

    char* add_up = " & Tushar are bestfreinds.";
    strcat(source,add_up);                          // adds two strings and save it in first (source)
    printf("%s",source);

    return 0;
}