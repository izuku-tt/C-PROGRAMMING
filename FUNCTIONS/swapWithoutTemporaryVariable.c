/**
swapping two number without using the third variable
**/
#include <stdio.h>

int main() {
	int a, b;  // Declare two integer variables a and b

	// Prompt the user to input the value of 'a'
	printf("Enter the integer a: ");
	scanf("%d", &a);  // Read and store the input value in 'a'

	// Prompt the user to input the value of 'b'
	printf("Enter the integer b: ");
	scanf("%d", &b);  // Read and store the input value in 'b'

	// Swapping the values of 'a' and 'b' without using a temporary variable
	a = a + b;  // Add 'a' and 'b', store the result in 'a'
	b = a - b;  // Subtract the new value of 'a' by 'b', store the result in 'b' (which gives original 'a')
	a = a - b;  // Subtract the new value of 'b' from 'a', store the result in 'a' (which gives original 'b')

	// Output the swapped values of 'a' and 'b'
	printf("\nAfter swapping a and b\n");
	printf("a = %d\n", a);
	printf("b = %d", b);

	return 0;  // Exit the program
}
