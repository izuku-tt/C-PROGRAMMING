/*
number pyramiid mast(this is before adding comments through chatgpt ; look for line 28 for diffference )

example below for n = 4;
    1
   121
  12321
122343221
*/
#include <stdio.h>
int main (){
    int n;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    int nsp = n - 1;
    for(int i=1; i<=n; i++){
        int a=i-1;
        
        for(int q =1; q<=nsp; q++){
            printf(" ");
        }
        nsp--;
        
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        
        for(int k=1; k<=i-1; k++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}

