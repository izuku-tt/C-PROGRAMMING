#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Find_MinIndex(int arr[],int start, int size){
    int minindex = start;
    for (int i= start ; i < size ; i++){
        if( arr[minindex] > arr[i] ){
            minindex = i;
        }
    }
    return minindex;
}
void selectionSort(int arr[], int size){
    int minindex;
    for(int i = 0; i< size-1; i++){
        for(int j = i+1; j<size; j++){
            minindex = Find_MinIndex(arr,i,size);
            if(arr[i]>arr[minindex]){
                swap(&arr[i], &arr[minindex]);
            }
        }
    }
}
int main(){
    int arr[] = {23,45,12,3,56,11,65};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array: ");
    for(int i =0;i< size;i++){
        if(i==0) printf("{%d, ",arr[i]);
        if (i!=0 && i!= size - 1)printf("%d, ",arr[i]);
        if(i== size-1) printf("%d}", arr[i]);
    }
    printf("\n");
    selectionSort(arr, size);
    
    printf("Sorted Array: ");
    for(int i =0;i< size;i++){
        if(i==0) printf("{%d, ",arr[i]);
        if (i!=0 && i!= size -1)printf("%d, ",arr[i]);
        if(i== size-1) printf("%d}", arr[i]);
    }
    printf("\n");
    return 0;
}