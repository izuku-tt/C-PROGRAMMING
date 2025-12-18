#include <stdio.h>
#include <stdbool.h>
int main(){
int arr[11]={1,2,3,4,5,6,1,2,3,4,5};
for(int i=0;i<=10;i++){
    bool flag = false;
    for (int j=i+1;j<=10;j++){
        if(arr[i]==arr[j]){
            flag=true;
            }
    }
    if(flag==false){
        printf("the unique number:%d",arr[i]);
        break;
    }
}
return 0;
}