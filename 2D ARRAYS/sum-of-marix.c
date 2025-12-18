#include <stdio.h>
void addtion(int r,int c,int matrix_1[r][c],int matrix_2[r][c]){
        int result[r][c];
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            result[i][j] = matrix_1[i][j] + matrix_2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the number of column:");
    scanf("%d",&c);
    int matrix1[r][c];
    int matrix2[r][c];    

    printf("enter the value for first %d*%d matrix\n",r,c);
    for (int i=0;i<r;i++){
    for (int j=0;j<c;j++){
        scanf("%d",&matrix1[i][j]);
        }
   }
    printf("enter the value for second %d*%d matrix\n",r,c);
   for (int i=0;i<r;i++){
    for (int j=0;j<c;j++){
        scanf("%d",&matrix2[i][j]);
        }
   }
    printf("the addtion matrix of given two matrices is:\n");
    addtion(r,c,matrix1,matrix2);
   return 0;
}