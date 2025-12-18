/*
STAR PYRAMID METHOD 2 only works for n
*/

#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	int nsp = n - 1;  // Initialize number of spaces
	int nst = 1;      // Initialize number of stars

	for(int i = 1; i <= n; i++) {
		// Print spaces
		for(int k = 1; k <= nsp; k++) {
			printf(" ");
		}
		// Print stars
		for(int j = 1; j <= nst; j++) {
			printf("*");
		}
		// Move to the next line
		printf("\n");

		// Adjust space and star counts for the next row
		nsp--;   // Decrease spaces by 1
		nst += 2; // Increase stars by 2
	}

	return 0;
}

