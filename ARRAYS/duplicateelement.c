#include <stdio.h>
int main(){
    int N=10;
    int arr[] = {1,2,3,4,5,6,7,4,9,10};
    for (int i=0;i<N;i++){
        for (int j = i+1;j<N;j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate element\n",arr[i]);
                printf("the index of first duplicate element is %d\n",i);
                printf("The index of second duplicate element is %d\n",j);
                break;
            }
        }
    }

}