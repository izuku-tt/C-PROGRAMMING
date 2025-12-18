#include <stdio.h>
int main(){
int arr[5] = {2,4,6,8,1};
printf("{");
for (int i = 0; i<5;i = i+1){
    if (i<4) printf("%d, ",arr[i]);
    else printf("%d}",arr[i]);
    }
return 0;
}