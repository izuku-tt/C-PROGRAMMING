/**
PASCAL TRIANGLE(ultimmate method)
using maths to reduce excess calculation
**/
#include <stdio.h>
int main() {
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int first = 1;  // Initialize the first element of the row to 1
		// Loop to print spaces for formatting the triangle
		for (int s = 0; s <= n - i - 1; s++) {
			printf(" ");
		}
		// Loop to calculate and print the values in the row
		for (int j = 0; j <= i; j++) {
			printf("%d ", first);                // Print the current value of 'first'
			/*
			Mathematical formula for calculating the next element in the row
			The next element in the row is derived by:
			first = first * (i - j) / (j + 1)
			This uses the property of combinations to avoid recalculating factorials
			 (i C j+1) = (i C j) * (i - j) / (j + 1)
			first = first * (i - j) / (j + 1);
			*/
		}
		// Move to the next line for the next row of Pascal's Triangle
		printf("\n");
	}
	return 0;
}

