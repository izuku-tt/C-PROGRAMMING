#include <stdio.h>
int main(){
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the number of column:");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter the value for %d*%d matrix\n",r,c);
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
   }
   // row-wise printing 
    printf("//wave print//\n");
    for (int i=0;i<r;i++){
        if(i%2==0){
            for (int j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for (int j=c-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }            
        }
       // printf("\n");
    }
   return 0;
}