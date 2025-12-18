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
    printf("\nMinimun valued element in array : ");
    int min=arr[0];
    for (int i = 0;i<n;i++){
        if(min>arr[i]) min = arr[i];
    }
    printf("%d",min);
    return 0;
}