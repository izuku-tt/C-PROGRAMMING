#include <stdio.h>
int main() {
    int arr[100];
    // Initialize the array with numbers from 1 to 100
    for (int i = 0; i < 100; i++) {
        arr[i] = i + 1;
    }
    int find;
    printf("Enter the search number between 1 to 100: ");
    scanf("%d", &find);

    int check = 0; // Flag to indicate if the number is found

    for (int k = 0; k < 100; k++) {
        if (arr[k] == find) {
            check = 1; // Number is found
            printf("%d is present at index arr[%d]\n", find, k);
            break;
        }
    }

    if (check == 0) {      // If the number is not found
        printf("%d is not present in the array.\n", find);
    }

    return 0;
}
