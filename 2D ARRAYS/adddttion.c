#include <stdio.h>
int main(){
    int matrix_1[3][3] = {{1,2,3},{4,5,6},{7,8,9}} , matrix_2[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    int result[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j] = matrix_1[i][j]+matrix_2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}