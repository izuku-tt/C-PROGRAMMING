#include <stdio.h>
typedef int* int_pointer;
int main(){
    int x = 5, y = 51;
    int_pointer a = &x, b = &y;
    printf("Address of x - %p\n", a);
    printf("Address of y - %p\n", b);
    return 0;
}