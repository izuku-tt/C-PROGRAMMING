#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void insertionsort(int arr[], int size){
    for (int i =0; i<size-1; i++){
        
    }
}

int main(){
    int arr[] = {3,5,1,12,45,6,18};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted Array : {");
    for(int i = 0; i< size;i++){
        if(i==size-1) printf("%d",arr[i]);
        else printf("%d, ",arr[i]);
    }
    printf("}\n");

    insertionsort(arr,size);

    printf("Sorted Array : {");
    for(int i = 0; i< size;i++){
        if(i==size-1) printf("%d",arr[i]);
        else printf("%d, ",arr[i]);
    }
    printf("}");
    return 0;
}