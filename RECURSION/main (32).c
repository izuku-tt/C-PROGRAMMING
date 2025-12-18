/*
prinnt n to 1 using recursion
*/
#include <stdio.h>
void decreasing(int x) {

	if(x==0) return;
	printf("%d ",x);
	decreasing(x-1);
}

int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	decreasing(n);
	return 0;
}