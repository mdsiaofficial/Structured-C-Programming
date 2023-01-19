#include <stdio.h>
int main(){

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year%400==0) || ((year%4==0) && (year%100!=0))){
        printf("%d Leap year.", year);
    }else{
        printf("%d Not Leap year.", year);
    }
    return 0;
}