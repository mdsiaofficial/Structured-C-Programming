#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;

    scanf("%d %d", &a, &b);

    c = 180 - (a+b);

    printf("Third angle: %d", c);
    
    return 0;
}