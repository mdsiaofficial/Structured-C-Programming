#include <stdio.h>
#include <math.h>
int main(){
    int year;
    scanf("%d", &year);

    (year % 400 == 0 || (year % 4 == 0 && year%100 !=0)) ? printf("%d Leap Year", year) : printf("%d Not Leap Year", year);
    
    return 0;
}