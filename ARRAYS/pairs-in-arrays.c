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
        if(i==n-1) printf("%d}\n",arr[i]);
        else printf("%d,",arr[i]);
    }
    int value; //lets find the  total number of pairs in the array whose sum is value
    printf ("enter the number to find it's component pairs:");
    scanf("%d",&value);
    int pair =0;
    printf("the pairs are :\n");
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==value) {
                pair+=1;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("Total number of  pairs in given array is whose sum is %d = %d ",value,pair);
    return 0;
}