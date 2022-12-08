#include <stdio.h>
#include <math.h>

long long factorial(int n){
    long long fact=1;
    for(int i=n; i>=1; i--){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    double sum=0.0;

    for(int i=1; i<=n; i++){
        double bottom = ((double)i/(double)factorial(i));
        sum = sum + bottom;
    } 
    printf("Sum of the series: %lf\n", sum);

    return 0;
}