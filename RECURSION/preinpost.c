#include <stdio.h>

void preInPost(int n){
    if(n==0) return;
    printf(" PRE %d\n",n);preInPost(n-1);printf(" IN %d\n",n);preInPost(n-1);printf(" POST %d\n",n); return;
}

int main(){
    preInPost(2); return 0
    ;
}