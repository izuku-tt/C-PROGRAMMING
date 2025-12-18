#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "My Name is Akhtar Raza. what is going on?\0";
    //printf("%s", str);
    puts(str);
    int size = 0;

    int i =0;
    while(str[i]!='\0'){
        size+=1;
        i++;
    }
    printf("the size of string: %d",size);
    return 0; 
}
/*

strlen	Returns the length of the string.           size_t len = strlen(str);
strcpy	Copies one string into another.             strcpy(dest, src);
strcat	Concatenates two strings.                   strcat(dest, src);
strcmp	Compares two strings lexicographically.	    int cmp = strcmp(str1, str2);
strchr	Finds the first occurrence of a character.	char *pos = strchr(str, 'a');
strstr	Finds the first occurrence of a substring.	char *pos = strstr(str, "Midoriya");
*/