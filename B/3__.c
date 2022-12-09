#include <stdio.h>
#include <math.h>
int main(){

    int year;
    scanf("%d", &year);

    ((year%400==0) || ((year%4==0) && (year%100!=0))) ? printf("%d Leap year.", year) : printf("%d Not Leap year.", year);

    return 0;
}