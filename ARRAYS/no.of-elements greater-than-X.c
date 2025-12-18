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
    int number;
    printf("\nLet find the number of elements greater than a certain value: \n");
    printf("Enter the value :");
    scanf("%d",&number);
    int result = 0;
    for (int i=0;i<n;i++){
        if (arr[i]>number) result+=1;
    }
    printf("The number of elements greater than %d is equal to %d",number,result);
    return 0;
}