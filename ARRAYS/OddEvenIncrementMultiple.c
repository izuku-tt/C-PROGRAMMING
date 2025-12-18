#include <stdio.h>
void main() {
    int n;
    printf("enter the length of array: ");
    scanf("%d", &n); 
    int arr[n];
    printf("Enter %d elements in order:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Your array is: {");
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d}\n", arr[i]);  // No comma for the last element
        } else {
            printf("%d, ", arr[i]);   // Comma for other elements
        }
    }
    printf("After multiplying odd indices to second multiple and incrementing even indices by 10.\n");
    printf("Now your updated array is: {");
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {  // Even indices
            arr[i] += 10;
        } else {  // Odd indices
            arr[i] *= 2;
        }
        if (i == n - 1) {  // No comma for the last element
            printf("%d}", arr[i]);
        } else {  // Comma for other elements
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
    return;
}
