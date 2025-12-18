/*
print sum of 1 to n using return type
*/
#include <stdio.h>
// Recursive function to calculate the sum of numbers from 1 to x
int sum(int x) {
    // Base case: if x is 1, return 1
    // This ensures that the recursion stops once we've reached 1,
    // which is the smallest number in the sum (from 1 to n).
    if (x == 1) return 1;

    // Recursive case: add x to the result of sum(x - 1)
    // The function calls itself with a reduced value (x - 1) until it hits the base case.
    // This works like this: x + (x-1) + (x-2) + ... + 1.
    return x + sum(x - 1);
}

int main() {
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    int result = sum(number);
    printf("The sum of 1 to %d = %d", number, result);
    return 0;
}

