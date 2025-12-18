#include <stdio.h>
int main(){
    int arr[5] = {2,4,6,8,1}; // 5 dabbe create ho gayein
    arr[4]=100; //{2,4,6,8,100}
    printf("%d\n",arr[4]);
    
    float a[3] = {1.2,3.4,5.7};
    printf("%f\n", a[1]);

    char crr[4] = {'a','n','Y','%'} ;
    printf ("%c\n", crr[2] ) ;

    return 0;
}