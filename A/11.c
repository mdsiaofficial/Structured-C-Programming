#include <stdio.h>
#include <math.h>
int main(){

    int a1, a2, a3;

    printf("Enter the value: ");
    
    scanf("%d %d", &a1, &a2);

    a3 = 180 - (a1 + a2);

    printf("3rd Angle: %d", a3);
    
    return 0;
}