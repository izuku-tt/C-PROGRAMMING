
#include <stdio.h>
int main()
{
  int n;
    printf("enter the number of rows=");
    scanf ("%d",&n);
    int m;
     printf("enter the number of column=");
    scanf ("%d", &m);
    for (int i=1; i<n+1;i=i+1){
      for(int i=1; i<m+1;i=i+1){
        printf("*");
      }
      printf("\n");
    }
    return 0;
}