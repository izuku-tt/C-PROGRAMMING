/*
STAR PLUS PATTERN  works for only odd input
 this is the correct code 
*/

#include <stdio.h>

int main()
{
	int n;
	printf("enter the odd number of rows=");
	scanf ("%d", &n);
	for(int i =1; i<=n; i++) {
		for(int j =1; j<=n; j++)
		{
			int odd = n/2 +1;
			if(j==odd || i==odd)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}