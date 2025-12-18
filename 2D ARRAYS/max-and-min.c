#include <stdio.h>
#include <limits.h>
int main(){
    int r,c;
    printf("enter the number of rows:");
    scanf("%d",&r);
    printf("enter the number of column:");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter the value for %d*%d matrix\n",r,c);
   for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   printf("\n");
   int max = INT_MIN;
   int min = INT_MAX;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
   printf("The maximum value:%d \nThe minimun value:%d",max,min);
   return 0;
}