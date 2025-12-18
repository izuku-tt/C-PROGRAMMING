#include <stdio.h>
#include <stdbool.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int arr[],int size){
    for(int i = 0; i < size-1 ; i++){
        bool flag = false;              // not sorted
        for(int j = 0; j < size-1-i ; j++){
            if (arr[j]>arr[j+1]){
                swap( &arr[j], &arr[j+1]);
                flag = true;
            }        
        }
        if(flag == false) break;
    }
}
int main(){
    int arr[7] = {2,3,56,7,24,1,45};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("your array: ");
    for (int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubblesort(arr,size);

    printf("sorted array: ");
    for (int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}