/*
print 1 to n using recursion
*/
#include <stdio.h>
void increasing(int x, int n) {

	if(x>n) return;
	printf("%d ",x);
	increasing(x+1,n);
}

int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	increasing(1,n);
	return 0;
}