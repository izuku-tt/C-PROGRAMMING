#include <stdio.h>
int main() {
	int n;
	printf ("enter the length of array:");
	scanf ("%d",&n);
	int arr[n];
	for (int i = 0; i<n; i++) {
		int a = i+1;
		printf ("enter element number %d: ",a);
		scanf("%d",&arr[i]);
	}

	printf ("The array is :{");

	for (int i=0; i<n; i++) {
		if(i<n-1) printf ("%d,", arr[i]);
        else printf ("%d",arr[i]);
	}
    printf ("}");
	return 0;
}