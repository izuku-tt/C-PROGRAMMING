/*
TYPE CASTING
pattern = alphabet triangle right angled 
printing the acii value of alphabeT
*/

#include <stdio.h>

int main()
{
	int n;
	printf("enter the number of rows = ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		int a = 1;
		for(int j=1; j<=i; j++) {
			int d= a+64;
			char ch=(char)d; // TYPE CASTING = CONVERSION OF ONE DATA TYPE TO ANOTHER DATA TYPE from int to char 
			printf("%c ",ch);
			a++;
		}
		printf("\n");
	}

	return 0;
}