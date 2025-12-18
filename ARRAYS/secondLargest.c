#include <stdio.h>
int main(){
    int n;
    printf("enter the length of array:");
    scanf("%d",&n);
    int arr[n];
    // Check for a valid array length for finding the second maximum.
    if (n < 2) {
        printf("Array must contain at least two elements to find the second maximum.\n");
        return 1;
    }
    printf("enter the %d elements in order:\n",n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("your array is :{");
     for (int i=0;i<n;i++){
        if(i==n-1) printf("%d}",arr[i]);
        else printf("%d,",arr[i]);
    }
    printf("\nthe second Maximun valued element in array : ");
    int max=arr[0];
        for (int i = 0;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
    int second_max = arr[0];
    for (int i = 0;i<n;i++){
        if(second_max<arr[i] && arr[i]!= max ) second_max = arr[i];
    }
    printf("%d",second_max);
    return 0;
}