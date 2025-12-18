/*
factorial 
*/

#include <stdio.h>

int factorial(int x){
    if (x ==1 || x ==0){
        return 1;
    }
    return x * factorial(x-1);
} 

int main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    int result = factorial(number);
    printf("the factorial of %d = %d",number, result);
    return 0;
}