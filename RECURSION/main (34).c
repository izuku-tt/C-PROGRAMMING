/**
print sum from 1 to n parameterised
**/
#include <stdio.h>

//Function to calculate the sum of numbers from 1 to x recursively x: the current number being added s: the accumulated sum so far
void sum(int x, int s) {
	// Base case: when x reaches 0, stop the recursion and print the result
	if(x == 0) {
		printf("The sum of numbers up to n is %d", s);
		return;  // End the function when the base case is met
	}

	// Recursive step: call the sum function with updated arguments. Decrease x by 1 and add the current value of x to the sum (s)
	sum(x - 1, s + x);

	// Optional return statement at the end (not strictly necessary after recursion)
	return;
}

int main() {
	int n;

	// Ask the user to input a number
	printf("Enter the number: ");
	scanf("%d", &n);

	// Start the recursive summing process with the user's input (n) and initial sum (0)
	sum(n, 0);

	return 0;  // Indicate successful program termination
}
