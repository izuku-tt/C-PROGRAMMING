#include <stdio.h>
void reverse(int arr[],int si , int ei){
    for (int i = si,j = ei;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int n;
    printf("enter the length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d elements in order:\n",n);
    for (int i=0;i<n;i++){
        if(i==0) printf("enter the 1st element:");
        if(i==1) printf("enter the 2nd element:");
        if(i==2) printf("enter the 3rd element:");
        if(i>2) printf("enter the %dth element:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("your array is :{");
     for (int i=0;i<n;i++){
        if(i==n-1) printf("%d}",arr[i]);
        else printf("%d,",arr[i]);
    }
    int k;
    printf("\nEnter the value for rotation:");
    scanf("%d", &k);
    printf("Array after %d",k);
    k = k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

     printf(" rotations is :{",k);
     for (int i=0;i<n;i++){
        if(i==n-1) printf("%d}",arr[i]);
        else printf("%d,",arr[i]);
}
return 0;
}