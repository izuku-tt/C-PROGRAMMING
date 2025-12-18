#include <stdio.h>
#define N 10
int main(){

    int arr[N] = {95,90,31,25,100,50,65,89,97,30};
    for (int i = 0 ; i<=N-1 ; i++){
        if (arr[i]<35) {
            printf("%d and the marks is %d\n",i,arr[i] );
            }
    }
    printf("NOTE:the indices starts  with 0 and end on N-1");
    return 0;
}