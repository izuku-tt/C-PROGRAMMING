#include <stdio.h>
int main(){
    int rows,columns=2;
    printf("enter the number of students with roll number:");
    scanf("%d",&rows);
    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the data distribution:\n");
    for(int i=0;i<rows;i++){
            printf("%d->%d \n",arr[i][0],arr[i][1]);
        }
        printf("\n");   
    return 0;
}

// 