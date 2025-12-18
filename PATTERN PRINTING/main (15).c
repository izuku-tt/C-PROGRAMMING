/*
 ODD STAR TRIANGLE
 method 1 = using A.P concept 
 method -2 using  a new variable nst(nuumber of stars)
*/

#include <stdio.h>

int main()
{
	int n;
	printf("enter the number of rows = ");
	scanf ("%d", &n);
	int nst;
	for (int i = 1; i<= n; i++) {
		for (int j = 1; j<=nst; j++)
		{
			printf("*");
		}
		nst = nst + 2;
		printf("\n");
	}

	return 0;
}