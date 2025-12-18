#include <stdio.h>

int main() {
    int N, unique;
    printf("Enter the size of the array:");
    scanf("%d", &N);

    printf("Enter the unique element: ");
    scanf("%d", &unique);

    int size = 2 * N - 1;
    int arr[size];
    int index = 0;

    for (int i = 1; i <= N; i++) {
        if (i == unique) {
            arr[index++] = i;
        } else {
            arr[index++] = i;
            arr[index++] = i;
        }
    }

    printf("Array with one unique element:{");
    for (int i = 0; i < size; i++) {
		if(i==size-1) printf("%d}",arr[size-1]);
       	else  printf("%d, ", arr[i]);
    }
    printf("\n");

    return 0;
}