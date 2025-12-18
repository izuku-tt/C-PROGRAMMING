/*
STAR CROSS PATTERN  works for only odd input
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
			if(i==j || i+j==6)
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