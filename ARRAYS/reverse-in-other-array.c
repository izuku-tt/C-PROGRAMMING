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
    printf ("\nThe reverse array is : {");
    for (int j= n-1;j>=0;j--){
        if(j==0) printf("%d}",arr[j]);
        else printf("%d,",arr[j]);
    } 
    return 0;
    }