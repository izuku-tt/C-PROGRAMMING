#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int arr[],int size){
    for(int i = 0; i < size-1 ; i++){
        for(int j = 0; j < size - 1 ; j++){
            if (arr[j]>arr[j+1]) swap( &arr[j], &arr[j+1]);            
        }
    }
}
int main(){
    int arr[7] = {2,3,56,7,24,1,45};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    return 0;
}