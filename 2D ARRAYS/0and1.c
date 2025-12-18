#include <stdio.h>
int main(){
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,1,1,1}};
    int max_count = 0;
    int index = -1;
    int i;
    printf("\n");
    for (i=0;i<3;i++){ 
        int count =0;
        for (int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
        }
        if(max_count < count){
            max_count = count;
            index == i;
        }
    printf("\n");
   }
            if(i==0) printf("1st row");
            if(i==1) printf("2nd row");
            if(i==2) printf("3rd row");
            if(i>2) printf("%dth row",i);
            printf("\n");
   printf("the maximum number of 1 in that row :%d",max_count);
    return 0;
}