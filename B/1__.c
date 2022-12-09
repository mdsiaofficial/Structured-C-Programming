#include <stdio.h>
#include <math.h>
int main(){

    int a,b,c, max, min;

    scanf("%d %d %d", &a, &b, &c);

    max = (a>b) ? ((a>c) ? a : c ) : ((b>c) ? b : c);
    min = (a<b) ? ((a<c) ? a : c ) : ((b<c) ? b : c);

    printf("Maximum: %d\nMinimum: %d\n", max, min);
    

    return 0;
}