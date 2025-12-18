#include <stdio.h>
int main(){
    int n;
    printf("enter the length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d elements in order:\n",n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("your array is :{");
     for (int i=0;i<n;i++){
        if(i==n-1) printf("%d}",arr[i]);
        else printf("%d,",arr[i]);
    }
    printf("\nsum of it's elements: ");
    int sum = arr[0];
    for (int i = 0;i<n-1;i++){
        sum = sum + arr[i+1];
    }
    printf("%d",sum);
    return 0;
}