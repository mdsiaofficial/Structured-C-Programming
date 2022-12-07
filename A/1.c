#include <stdio.h>
int main(){

    int a, b, sum;

    printf("Enter the values: ");
    scanf("%d %d", &a, &b);

    sum = a+b;

    printf("Sum of %d and %d = %d", a, b, sum);

    return 0;
}