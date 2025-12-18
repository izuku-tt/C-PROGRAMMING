#include <stdio.h>
#include<string.h>
int main(){
    char str[] = "My Name is Akhtar Raza. what is going on?\0";
    //printf("%s", str);
    puts(str);
    int size = 0;
    int i = 0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("The size of string is:%d\n", size);
    int j = size-1 ;
    while (j >= 0){
        printf("%c",str[j]);
        j--;
    }
    return '\0';
}