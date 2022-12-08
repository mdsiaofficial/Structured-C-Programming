#include <stdio.h>
#include <math.h>

int main(){

    int alldays;

    scanf("%d", &alldays);

    int years = alldays/365;
    int weeks = (alldays%365)/7;
    int days = (alldays%365)%7;

    printf("Years: %d Weeks: %d Days: %d\n",years, weeks, days);
    
    return 0;
}