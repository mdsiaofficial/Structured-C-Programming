#include <stdio.h>
#include <math.h>

int main(){

    int x, y;
    scanf("%d %d", &x, &y);
    
    int power = pow(x, y);
    
    printf("Result: %d\n", power);

    return 0;
}