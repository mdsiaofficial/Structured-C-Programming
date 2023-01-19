#include <stdio.h>

int main()
{
    unsigned long long n, f;
    printf("Enter any number: ");
    scanf("%d", &n);
    f=1;
    for(int i=1; i<=n; i++){
        f=f*i;
    }
    printf("Factorial of %d is = %d\n", n, f);
    
    return 0;
}