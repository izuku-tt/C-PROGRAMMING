/**
PASCAL TRIANGLE by using nCr function/combination  function
**/
#include <stdio.h>


int factorial(int x) {                  // Function to calculate factorial of a number
    int fact = 1;
    for (int i = 2; i <= x; i++) {     // Loop to calculate the factorial
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr (combination)
int combination(int n, int r) {
    // nCr = n! / (r! * (n - r)!)
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {                           // Loop to print each row of Pascal's Triangle
        for (int s = 0; s < n - i - 1; s++) {               // Print spaces to align the triangle properly
            printf(" ");
        }

        // Loop to print each number in the row
        for (int j = 0; j <= i; j++) {
            // Print the combination value
            printf("%d ", combination(i, j));
        }

        // Move to the next line after finishing the row
        printf("\n");
    }

    return 0;
}

