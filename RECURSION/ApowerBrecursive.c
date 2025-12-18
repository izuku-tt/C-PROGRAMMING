/*
a raised to power b using recursive call
*/
#include <stdio.h>
int main(){
    int power(int a, int b) {
    if (b == 0) return 1;
    return a * power(a, b - 1);
}
    int base,exponent;
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the power of base:");
    scanf("%d",&exponent);
    int result=power(base,exponent);
    printf("%d raised to power %d =%d",base,exponent,result);
    return 0;
}
