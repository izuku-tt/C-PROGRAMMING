/*
SWAPPING TWO VARIABLE BY CREATING FUNNCTIONS 
*/

#include <stdio.h>
void swap(int* x, int* y) {
int temp = *x; // Use *x to get the value at the address pointed to by x
    *x = *y;      // Set the value at the address pointed to by x to the value at the address pointed to by y
    *y = temp;    // Set the value at the address pointed to by y to the original value stored in temp
	return;
}
int main()
{
	int a;
	printf("enter 1st integer a:");
	scanf("%d", &a);
	int b;
	printf("enter 2nd integer b:");
	scanf("%d", &b);
	swap(&a,&b);
	printf("the integers after swapping:-\n");
	printf(" a = %d\n", a);
	printf(" b = %d\n", b);
	return 0;
}