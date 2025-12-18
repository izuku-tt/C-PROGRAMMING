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
    printf("Inpput matrix:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
   }
   int max_row = r-1,min_row = 0;
   int max_column = c-1,min_column = 0;
   int total_elements = r*c,count = 0;
   printf("spiral: ");
   while(count<total_elements){
        //print minimun row
        for(int j = min_column; j<=max_column; j++){
            printf("%d ",arr[min_row][j]);
            count++;
        }
        if(count==total_elements) break;
        min_row++;
        // print the maximun column
        for(int i =min_row; i<=max_row; i++){
            printf("%d ",arr[i][max_column]);
            count++;
        }
        max_column--;
        if(count==total_elements) break;
        //print the maximmum row in reverse
        for(int j = max_column; j>=min_column; j--){
            printf("%d ", arr[max_row][j]);
            count++;
        }
        max_row--; 
        if(count==total_elements) break;
        //print minimum column in reverse
        for(int i= max_row;i>=min_row;i--){
            printf("%d ", arr[i][min_column]);
            count++;
        }
        min_column++;
        if(count==total_elements) break;
   }
   return 0;
}