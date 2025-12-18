#include <stdio.h>
void difference(int x,int y) {
	int diff = x-y;
	int negetive= -diff;
	if(diff<0) printf("the difference is %d",negetive);
	else printf("the difference is %d",diff);
}

int main() {
	int n;
	printf("Enter the length of array: ");
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
	printf("Adding odd indices and even indices...please wait\n");
	int even = 0, odd = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {  // Even indices
			even += arr[i];
		} else {  // Odd indices
			odd += arr[i];
		}
	}
	printf("\nthe sum of elementa at odd indices = %d\nThe sum of elements at even indices = %d \n5",odd,even);
	printf("Now calculating differece between sums\n");
	difference(odd,even);
	return 0;
}



