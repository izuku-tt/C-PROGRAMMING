#include <stdio.h>
#include <stdbool.h>
#define N 10
int main() {
    int target;
    int sorted[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("Enter the target value sum of any two numbers between 1 to 10: ");
    scanf("%d", &target);
    // Early exit if target is impossible
    if (target < 3 || target > 19) {
        printf("INVALID TARGET (must be between 3 and 19)\n");
        return 0;
    }

    int i = 0, j = N - 1;
    bool flag = false;

    while (i < j) {
        int sum = sorted[i] + sorted[j];
        if (sum == target) {
            printf("sum of %d and %d equals %d\n", sorted[i], sorted[j], target);
            flag = true;
            break; // Remove break to find all possible pairs
        }
        else if (sum > target) j--;
        else i++;
    }

    if (!flag) printf("INVALID TARGET\n");
    return 0;
}