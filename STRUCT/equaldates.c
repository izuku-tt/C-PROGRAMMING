#include <stdio.h>
#include <stdbool.h>
int main(){
    typedef struct S{
        int day;
        int month;
        int year;
    }date;
    date a,b;
    a.day = 2;
    a.month = 11;
    a.year = 2004;
    b.day = 2;
    b.month =11;
    b.year = 2004;

    bool flag = true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if (flag == true) printf ("Dates are equal");
    else printf("Dates are different");
    return 0;
}