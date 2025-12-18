/*
number pyramiid mast

example below for n = 4;
    1
   121
  12321
122343221
*/
#include <stdio.h>

int main() {
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	int nsp = n - 1;

	for (int i = 1; i <= n; i++) {
		// Print spaces
		for (int q = 1; q <= nsp; q++) {
			printf(" ");
		}
		nsp--;

		// Print increasing numbers from 1 to i
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}

		// Print decreasing numbers from i-1 to 1
		for (int k = i - 1; k >= 1; k--) {
			printf("%d", k);
		}

		// Move to the next line
		printf("\n");
	}

	return 0;
}
