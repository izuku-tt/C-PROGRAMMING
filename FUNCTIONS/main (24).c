/*
FUNCTIONS ques -> find nCr (permutation andd commbination )
*/
#include <stdio.h>

// Function to calculate the factorial of a given number
int factorial(int x) {
	int fact = 1;

	// Loop to multiply all numbers from 1 to x to calculate the factorial
	for (int i = 1; i <= x; i++) {
		fact = fact * i;  // Multiply fact by i in each iteration
	}

	return fact;  // Return the factorial value
}

int main() {
	int n, r;  // Variables to hold the values of n and r

	// Prompt the user for input
	printf("Let's find nCr (permutation and combination).\n");

	// Get the value of n from the user
	printf("Enter the value of n: ");
	scanf("%d", &n);

	// Get the value of r from the user
	printf("Enter the value of r: ");
	scanf("%d", &r);

	// Calculate the factorials of n, r, and (n - r)
	int nfact = factorial(n);          // Factorial of n
	int rfact = factorial(r);          // Factorial of r
	int nr_fact = factorial(n - r);    // Factorial of (n - r)

	// Output the result of nCr using floating-point division by casting
	printf("Using floating-point division, the %dC%d = %f\n", n, r, (double)nfact / (rfact * nr_fact));

	return 0;  // Return 0 to indicate successful execution
}
