#include <stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;  
}
int main(){
    //make transpose of square matrix of n rows.
    int sq;
    printf("enter the number of rows:");
    scanf("%d",&sq);
    int matrix[sq][sq];
    for(int i=0;i<sq;i++){
        for(int j=0;j<sq;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    //transpose loop
    for (int i=0;i<sq;i++){
        for(int j=0;j<sq;j++){
            if(i<j) swap(&matrix[i][j],&matrix[j][i]);
           // else break;
        }
    }
    //print the transpose matrix
    for(int i=0;i<sq;i++){
        for(int j=0;j<sq;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}